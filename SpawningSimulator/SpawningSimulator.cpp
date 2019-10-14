#include <iostream>
#include <string>
#include <list>
#include <chrono>
#include <thread>
#include <mutex>
#include "SpawningSimulator.h"

const int MONSTER_NUM = 100; // 생성 & 삭제 할 몬스터의 갯수
const int TIME_SCALE = 10; // 시간 배속
const double RUNNING_TIME = 50.f; // 시뮬레이션을 몇 초 동안 진행할지

ObjectPool<Monster> monster_pool(MONSTER_NUM);
std::list<Monster*> monster_list;

void Init()
{
	for (int i = 0; i < MONSTER_NUM; i++)
	{
		Monster* monster = monster_pool.GetObject();
		monster->Init();
		monster_list.push_back(monster);
	}
}

void GenerateMonster(std::mutex& m)
{
	while (monster_list.size() < MONSTER_NUM)
	{
		std::lock_guard<std::mutex> lock(m);
		Monster* monster = monster_pool.GetObject();
		monster->Init();
		monster_list.push_back(monster);

		std::cout << monster->GetName() << " 오브젝트가 생성되었습니다." << std::endl;
	}
}

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
		if (monster_list.size() < MONSTER_NUM / 2)
			t2 = std::thread(GenerateMonster, std::ref(m));

		t1.join();

		if (t2.joinable())
			t2.join();
	}
}

int main()
{
	std::cout << "객체 생성 / 소멸 시뮬레이션을 시작합니다." << std::endl;

	Init();
	Simulate();

	return 0;
}
