//#include <iostream>
//#include <string>
//
//using namespace std;
//
//enum CarType { SUV, SEDAN };
//
//class Car {
//public: virtual void print() = 0;};
//class Suv : public Car {
//public: void print() override { cout << "Suv" << endl; }};
//class Sedan : public Car {
//public: void print() override { cout << "Sedan" << endl; }};
//
//class CarFactory {
//public: 
//	Car* makeCar(CarType type) {
//		if (type == SUV)
//			return new Suv();
//		else if (type == SEDAN)
//			return new Sedan();
//	}
//};
//
//int main()
//{
//	CarFactory f;
//	Car* c1 = f.makeCar(SUV);
//	Car* c2 = f.makeCar(SEDAN);
//	
//	c1->print();
//	c2->print();
//
//	delete c1;
//	delete c2;
//
//	return 0;
//}