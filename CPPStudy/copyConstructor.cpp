//#include<iostream>
//
//class PhotonCannon
//{
//	int hp, shield;
//	int coord_x, coord_y;
//	int damage;
//public:
//	PhotonCannon(int x, int y);
//	PhotonCannon(const PhotonCannon& pc);
//	PhotonCannon& operator=(const PhotonCannon& other)
//	{
//		std::cout << "대입 연산자 호출 !" << std::endl;
//		hp = other.hp;
//		shield = other.shield;
//		coord_x = other.coord_x;
//		coord_y = other.coord_y;
//		damage = other.damage;
//
//		return *this;
//	}
//	void show_status();
//};
//PhotonCannon::PhotonCannon(const PhotonCannon& pc)
//{
//	std::cout << "복사 생성자 호출 !" << std::endl;
//	hp = pc.hp;
//	shield = pc.shield;
//	coord_x = pc.coord_x;
//	coord_y = pc.coord_y;
//	damage = pc.damage;
//}
//PhotonCannon::PhotonCannon(int x, int y)
//{
//	std::cout << "생성자 호출 !" << std::endl;
//	hp = shield = 100;
//	coord_x = x;
//	coord_y = y;
//	damage = 20;
//}
//void PhotonCannon::show_status()
//{
//	std::cout << "Photon Cannon " << std::endl;
//	std::cout << " Location : ( " << coord_x << " , " << coord_y
//		<< " ) " << std::endl;
//	std::cout << " HP : " << hp << std::endl;
//}
//
//
//
//int main()
//{
//	PhotonCannon pc1(3, 3);
//	PhotonCannon pc2(pc1);
//	PhotonCannon pc3 = pc2;
//	PhotonCannon pc4(1, 1);
//	pc4 = pc3;
//
//	pc1.show_status();
//	pc2.show_status();
//	pc3.show_status();
//	pc4.show_status();
//
//	return 0;
//}