#pragma once
#include <stack>

template <typename T>
class ObjectPool
{
	stack<T*> pool;
	int max_size;
public:
	ObjectPool(int size = 30) {
		max_size = size;
		for (int i = 0; i < max_size; i++)
		{
			T* object = new T();
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
	void ReturnObject(T* obejct) {
		pool.push(object);
	}
};
