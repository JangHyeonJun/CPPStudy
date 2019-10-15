# C++ 포트폴리오 메뉴얼

#### 작성자: 장현준

----

*※ 담당자 분이 읽기 편하도록 문서를 최대한 간소화 하였습니다.*

---

## 목차

1. 구현 의도

2. Spawning Simulator 프로젝트

   2.1 프로젝트 개요

   2.2 코드 설명

   2.3 실행 화면

---



# 1. 구현 의도

  구현한 코드는 다음과 같은 고민을 통해 결정하게 되었습니다.

- 소스 파일 1개, 헤더 파일 1개의 작은 분량으로 나타낼 수 있는 코드
- 게임과 관련된 기능을 구현한 코드
- 평소 작성하는 코딩 스타일을 그대로 나타내도록 노력할 것
- C++ 11 이후의 최신 기법을 사용하되, 익숙하지 않거나 코드의 가독성을 떨어트린다고 생각될 경우 사용하지 말 것



# 2. Spawning Simulator 프로젝트

## 2.1  **프로젝트 개요**

​	오브젝트 풀링 패턴을 사용하여 몬스터 객체를 풀에서 가져와 생성, 제거하며 몬스터의 개수를 관리하는 코드를 쓰레드를 통해 구현해 보았습니다. 



![](https://user-images.githubusercontent.com/18680116/66810881-1555e280-ef6b-11e9-9dd9-a50ac7de37db.png)

​																	**<프로젝트 개요도>**

## 2.2  **코드 설명**

- ### SpawningSimulator.h

  - #### ObjectPool 클래스

  템플릿 클래스로 구현하여 풀링 기법을 사용하고 싶은 클래스를 등록하여 사용할 수 있도록 하였습니다. 

  **변수**들은 기본적으로 **private** 하게 접근하도록 하였습니다. `pool` 변수는 오브젝트의 포인터를 보관하는 `stack` 타입의 데이터이며 `max_size` 는 pool이 가지고 있을 수 있는 오브젝트의 최대 갯수를 뜻합니다.

  ```c++
  template <typename T>
  class ObjectPool
  {
  	std::stack<T*> pool;
  	int max_size;
  public:
  			...
  			...
  ```

  

    **생성자**에서는 `max_size` 변수를 초기화하고 new 연산을 통해 `pool` 변수에 동적할당한 객체의 포인터를 push 해놓고, **소멸자**에서는 객체를 pop 한 후에 delete 연산을 통해 메모리를 해제시켜줍니다. 

    매개변수는  `const&`  형식으로 받도록 하여 값을 수정할 일이 없음을 명시하고, 오류를 예방하며,  복사가 일어나지 않도록 하였습니다.	

  ```c++
  ObjectPool(const int& size = 100) {
  		max_size = size;
  		for (int i = 0; i < max_size; i++)
  		{
  			T* object = new T(i);
  			pool.push(object);
  		}
  	}
  	~ObjectPool() {
  		while (!pool.empty())
  		{
  			T* object = pool.top();
  			pool.pop();
  			delete object;
  		}
  	}
  ```

  

    **GetObject** 함수는 풀에서 객체(의 포인터)를 가져오는 함수입니다. 만약 `pool` 에 저장해놓은 객체가 없다면 `max_size` 만큼 객체를 추가하고 `max_size` 를 2배로 늘립니다.

    **ReturnObject** 함수는 사용한 객체를 풀에 반환하는 함수, **IsEmpty** 함수는 풀에 비어있는지 알려주는 함수, **GetMaxSize** 함수는 풀의 `max_size` 를 반환하는 함수입니다.  

  ```c++
T* GetObject() {
  		if (pool.empty())
  		{
  			for (int i = 0; i < max_size; i++)
  			{
  				T* object = new T();
  				pool.push(object);
  			}
  			max_size *= 2;
  		}
  		T* object = pool.top();
  		pool.pop();
  		return object;
  	}
  void ReturnObject(T* object) {
  		pool.push(object);
  	}
  bool IsEmpty() {
  		return pool.empty();
  	}
  int GetMaxSize(){
      return max_size;
  }
  ```
  
  

  - #### **Monster 클래스**

  몬스터를 실제로 사용하는 것은 아니기 때문에 클래스의 **변수**들은 간략하게 `name`, `hp`, `x`, `y`   만을 사용하여 클래스를 정의하였습니다.

  ```c++
class Monster
  {
	std::string name;
  	double hp;
	int x, y;
  ```
  
  
  
    객체 생성시에 정해진 `name` 은 바뀌지 않기 때문에 생성자에서 멤버 이니셜라이저를 통해 초기화 하도록 **생성자**와 **소멸자**를 정의하였습니다. 나머지 변수들은 객체를 가져올 때마다 **Init** 함수에서 초기화하도록 하였습니다.
  
  ```c++
public:
  	Monster() : name("Monster") {};
	Monster(const int& index) : name("Monster " + std::to_string(index)) {}
  	~Monster() {};
```
  
  
  
    **Init** 함수에서는 `random` 라이브러리 에서 제공하는 `random_device` 객체를 사용하여 초기화 하였습니다. 난수 생성을 위해 사용하던 **rand** 함수가 익숙하지만 C언어에서 사용하던 함수이므로, 성능이 개선되고 최적화된 C++ 표준 라이브러리를 대신 사용하였습니다.
  
  ```c++
#include <string>
  #include <stack>
#include <random>
  
// for generating random value
  std::random_device rd;
  std::mt19937 seed(rd());
  ```
  
  ```c++
  void Init() {
  		std::uniform_int_distribution<> randomHP(20, 100);
  		std::uniform_int_distribution<> randomPosition(-256, 256);
  
		hp = randomHP(seed);
  		x = randomPosition(seed);
  		y = randomPosition(seed);
  	}
  ```
  
  
  
    **Update** 함수에서는 random한 데미지를 나타내는 `randomDamage` 변수에 게임의 프레임당 시간을 나타내는 `elapsed_time` 변수를 곱해 `hp` 를 감소시키도록 하여 일정 시간이 지나면 몬스터 객체가 사망하도록 하였습니다.
  
  ```c++
void Update(const double& elapsed_time) {
  		std::uniform_int_distribution<> randomDamage(1, 5);
		hp -= randomDamage(seed) * elapsed_time;
  	}
```
  
  
  
    **GetName** 함수와 **GetPosition** 함수는 멤버 변수 `name` 과 `x`, `y` 를 반환하는 함수이며, **IsDead** 함수는 몬스터 객체가 사망하였는지 확인하는 함수입니다.
  
  ```c++
std::string GetName() { return name; }
  std::pair<int, int> GetPosition() { return std::make_pair(x, y); }
bool IsDead() {
  	if (hp <= 0)
		return true;
  	else
  		return false;
  	}
  ```



---

- ### SpawningSimulator.cpp

    코드에서 사용되는 고정값들은 `define` 키워드 대신에 `const`를 사용해야 타입이 지정되고, 디버깅이 쉽다는 등의 이점이 있기 때문에 모두 `const` 를 사용하였으며 상수임을 나타내기 위해 대문자로만 작성하여 사용하고 있습니다.

    `monster_pool` 은 몬스터 객체를 담고 있는 오브젝트 풀을 나타내며, `monster_list`는 맵에 존재하는 살아있는 몬스터를 나타냅니다.

  ```c++
  const int MONSTER_NUM = 100; // 처음 생성 & 삭제 할 몬스터의 갯수
  const int TIME_SCALE = 10; // 시뮬레이션 시간 배속
  const double RUNNING_TIME = 50.f; // 시뮬레이션을 몇 초 동안 진행할지
  
  ObjectPool<Monster> monster_pool(MONSTER_NUM);
  std::list<Monster*> monster_list;
  ```

  

    **Init** 함수는 처음 실행할 때 한번 호출되는 함수로써, `monster_pool` 에서 `MONSTER_NUM` 만큼 객체를 가져와 초기화하고 `monster_list` 에 push 합니다.

  ```c++
  void Init()
  {
  	for (int i = 0; i < MONSTER_NUM; i++)
  	{
  		Monster* monster = monster_pool.GetObject();
  		monster->Init();
  		monster_list.push_back(monster);
  	}
  }
  ```

  

    **GenerateMonster** 함수는 맵에 살아있는 몬스터(`monster_list`) 가 오브젝트 풀의 절반 이하로 떨어지면 호출되는 함수 입니다. 오브젝트 풀에 있는 모든 객체를 가져와 생성합니다.

    쓰레드를 사용하기 때문에 함수에서 **Update** 함수와  `monster_list` 와 `monsster_pool` 변수에 동시에 접근하는 **임계영역**이 생긴다. 임계영역 보호를 위해 인자로 받아온 `mutex` 를 `lock_guard` 객체에 담아 lock을 걸어 객체를 생성하는 동안 다른 쓰레드가 접근하지 못하도록 **상호배제** 기법을 구현하였습니다. 

  ```c++
  void GenerateMonster(std::mutex& m)
  {
  	while (!monster_pool.IsEmpty())
  	{
  		std::lock_guard<std::mutex> lock(m);
  		Monster* monster = monster_pool.GetObject();
  		monster->Init();
  		monster_list.push_back(monster);
  
  		std::cout << monster->GetName() << " 오브젝트가 생성되었습니다." << std::endl;
  	}
  }
  ```

  

    **Update** 함수는 시뮬레이션의 시간의 경과(`elapsed_time`)를 객체에 반영하는 함수입니다. `monster_list` 에 저장되어있는 모든 몬스터 객체를 확인하며 몬스터가 사망하였을 경우 `monster_list` 에서 객체를 erase 하고, 몬스터가 살아있을 경우 객체를 update 해주어 hp를 감소시킵니다.

    몬스터가 사망하였을 때, 객체를 제거하는 부분 또한 `monster_list` 와 `monster_pool` 에 접근하므로 `mutex` 와 `lock_guard` 를 사용하여 상호배제를 구현하였습니다.

  ```c++
  void Update(const double& elapsed_time, std::mutex& m)
  {
  	for (auto iter = monster_list.begin(); iter != monster_list.end();)
  	{
  		if ((*iter)->IsDead())
  		{
  			std::lock_guard<std::mutex> lock(m);
  			std::cout << (*iter)->GetName() << " 오브젝트가 사망하였습니다." << std::endl;
  			monster_pool.ReturnObject(*iter);
  			monster_list.erase(iter++);
  		}
  		else
  		{
  			(*iter)->Update(elapsed_time * TIME_SCALE);
  			iter++;
  		}
  	}
  }
  ```

  

    **Simulate** 함수는 시뮬레이션을 실행하는 함수입니다. 시간의 흐름을 나타내기 위해 `chrono` 라이브러리를 사용하였습니다. 

     `timer` 변수는 `RUNNING_TIME` 만큼 시뮬레이션을 실행시키기 위해 사용됩니다. `elapsed_time` 은 루프를 도는 동안의 경과 시간(`curr_time - prev_time`)을 저장합니다.

    `thread t1` 은 매 루프마다 **Update** 함수를 호출하는데 사용되고 `thread t2` 는 맵에 생성되어있는 몬스터의 갯수(`monster_list`)의 크기가 `monster_pool` 의 절반이하로 떨어졌을 때 **GenerateMonster** 함수를 호출합니다. 

    `mutex m` 을 통해 `t1` 과 `t2` 쓰레드의 상호배제 기법을 구현하고,  **join** 함수를 통해 쓰레드가 코드를 끝마칠 때 까지 기다립니다. 단, `t2` 쓰레드는 특정 조건에만 쓰레드가 생성되어 실행되므로 **joinable** 함수를 통해 join이 가능한지 체크합니다.

  ```c++
  void Simulate()
  {
  	auto prev_time = std::chrono::system_clock::now();
  	std::chrono::duration<double> timer = std::chrono::duration<double>::zero();
  	std::mutex m;
  	while (timer.count() < RUNNING_TIME)
  	{
  		auto curr_time = std::chrono::system_clock::now();
  		std::chrono::duration<double> elapsed_time = curr_time - prev_time;
  		timer += elapsed_time;
  		prev_time = curr_time;
  
  		std::thread t1, t2;
  		t1 = std::thread(Update, elapsed_time.count(), std::ref(m));
  		if (monster_list.size() < monster_pool.GetMaxSize() / 2)
  			t2 = std::thread(GenerateMonster, std::ref(m));
  
  		t1.join();
  
  		if (t2.joinable())
  			t2.join();
  	}
  }
  ```

  

    **main** 함수는 **Init** 으로 초기화, **Simulate** 로 시뮬레이션을 하는 함수를 호출하도록 간단하게 구성되어있습니다. 

   모든 C++ 코드에서 프로그램을 성공적으로 끝마쳤음을 알리기 위해 `return 0` 를 main 함수에 항상 써놓습니다.

  ```c++
  int main()
  {
  	std::cout << "객체 생성 / 소멸 시뮬레이션을 시작합니다." << std::endl;
  
  	Init();
  	Simulate();
  
  	return 0;
  }
  ```

---

## 2.3  **실행 결과**

#### ![](https://user-images.githubusercontent.com/18680116/66820349-738ac180-ef7b-11e9-8e78-7772175ac039.gif)

---



### 시간내어 긴 메뉴얼을 읽어주셔서 감사합니다:smile: 		-  장현준







