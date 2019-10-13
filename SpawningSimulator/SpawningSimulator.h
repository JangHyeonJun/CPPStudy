#pragma once
#include <stack>
#include <random>

// for generating random value
std::random_device rd;
std::mt19937 seed(rd());

template <typename T>
class ObjectPool
{
	std::stack<T*> pool;
	int max_size;
public:
	ObjectPool(int size = 1000) {
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
};

class Monster
{
	std::string name;
	double hp;
	int x, y;
public:
	Monster() : name("Monster") {};
	Monster(int index) : name("Monster " + std::to_string(index)) {}
	~Monster() {};

	void Init() {
		std::uniform_int_distribution<> randomHP(20, 100);
		std::uniform_int_distribution<> randomPosition(-256, 256);

		hp = randomHP(seed);
		x = randomPosition(seed);
		y = randomPosition(seed);
	}
	void Update(const double& elapsed_time) {
		std::uniform_int_distribution<> randomDamage(1, 5);
		hp -= randomDamage(seed) * elapsed_time;
	}
	std::string GetName() { return name; }
	std::pair<int, int> GetPosition() { return std::make_pair(x, y); }
	bool IsDead() {
		if (hp <= 0)
			return true;
		else
			return false;
	}
};
