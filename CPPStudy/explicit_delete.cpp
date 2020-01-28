//#include <iostream>
//
//using namespace std;
//
//class Monster
//{
//public:
//	const int default_damage = 10;
//
//	Monster() = delete;
//	Monster(int hp) : _hp(hp), _damage(default_damage){}
//
//	void printStatus() { cout << "HP : " << _hp << " Damage : " << _damage << '\n'; }
//private:
//	int _hp;
//	int _damage;
//};
//
//class EMonster
//{
//public:
//	const int default_damage = 10;
//
//	EMonster() = delete;
//	explicit EMonster(int hp) : _hp(hp), _damage(default_damage) {}
//
//	void printStatus() { cout << "HP : " << _hp << " Damage : " << _damage << '\n'; }
//private:
//	int _hp;
//	int _damage;
//};
//
//
//void DoPrint(Monster m)
//{
//	m.printStatus();
//}
//
//void DoPrint_E(EMonster e)
//{
//	e.printStatus();
//}
//
//int main()
//{
//	//Monster m1; // error 
//	DoPrint(20);
//	//DoPrint_E(20); // error 암시적 생성자 호출 막음
//}