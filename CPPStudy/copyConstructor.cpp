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
//
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
//int main()
//{
//	PhotonCannon pc1(3, 3);
//	PhotonCannon pc2(pc1);
//	PhotonCannon pc3 = pc2;
//
//	pc1.show_status();
//	pc2.show_status();
//	pc3.show_status();
//
//	return 0;
//}