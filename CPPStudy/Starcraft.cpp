//#include <iostream>
//
//class Marine
//{
//	int hp;
//	int coord_x, coord_y;
//	int damage;
//	bool is_dead;
//	char* name;
//
//public:
//	Marine();
//	Marine(int x, int y, const char* marine_name);
//	~Marine();
//
//	int attack();
//	void be_attacked(int damage_earn);
//	void move(int x, int y);
//
//	void show_status();
//};
//Marine::Marine()
//{
//	hp = 50;
//	coord_x = coord_y = 0;
//	damage = 5;
//	is_dead = false;
//	name = NULL;
//}
//Marine::Marine(int x, int y, const char* marine_name)
//{
//	name = new char[strlen(marine_name) + 1];
//	strcpy_s(name, strlen(marine_name)+1, marine_name);
//
//	coord_x = x;
//	coord_y = y;
//	hp = 50;
//	damage = 5;
//	is_dead = false;
//}
//void Marine::move(int x, int y)
//{
//	coord_x = x;
//	coord_y = y;
//}
//int Marine::attack() { return damage; }
//void Marine::be_attacked(int damage_earn)
//{
//	hp -= damage_earn;
//	if (hp <= 0)
//		is_dead = true;
//}
//void Marine::show_status()
//{
//	std::cout << "*** Marine : " << name << " ***" << std::endl;
//	std::cout << "Location : ( " << coord_x << " , " << coord_y
//		<< " ) " << std::endl;
//	std::cout << " HP : " << hp << std::endl;
//}
//Marine::~Marine()
//{
//	std::cout << name << " 의 소멸자 호출 ! " << std::endl;
//	if (name != NULL)
//		delete[] name;
//}
//
//int main()
//{
//	//Marine marine1(2, 3);
//	//Marine marine2(3, 5);
//
//	//marine1.show_status();
//	//marine2.show_status();
//
//	//std::cout << std::endl << "마린 1 이 마린 2 를 공격! " << std::endl;
//	//marine2.be_attacked(marine1.attack());
//
//	//marine1.show_status();
//	//marine2.show_status();
//
//	Marine* marines[100];
//
//	marines[0] = new Marine(2, 3, "Marine 1");
//	marines[1] = new Marine(3, 5, "Marine 2");
//
//	marines[0]->show_status();
//	marines[1]->show_status();
//
//	std::cout << std::endl << "마린 1 이 마린 2 를 공격! " << std::endl;
//	
//	marines[1]->be_attacked(marines[0]->attack());
//
//	marines[0]->show_status();
//	marines[1]->show_status();
//	
//	delete marines[0];
//	delete marines[1];
//
//	return 0;
//}