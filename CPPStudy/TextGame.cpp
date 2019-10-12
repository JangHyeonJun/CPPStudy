#include <iostream>
#include <queue>
#include "ObjectPool.h"
#include "Player.h"
#include "Monster.h"

ObjectPool<Monster> monster_pool(10);
std::priority_queue<Monster*, vector<Monster*>, gre> monsters;

const int monster_num = 5;

void Init()
{
	

}



int main()
{
    std::cout << "Hello World!\n"; 

	return 0;
}
