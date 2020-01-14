//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Car { public: virtual void print() = 0; };
//class DomesticCar : public Car {
//public: void print() override { cout << "국산 차" << endl; }};
//class ForeignCar : public Car {
//public: void print() override { cout << "외제 차" << endl; }};
//
//
//class Bike { public: virtual void print() = 0; };
//class DomesticBike : public Bike {
//public: void print() override { cout << "국산 오토바이" << endl; }
//};
//class ForeignBike : public Bike {
//public: void print() override { cout << "외제 오토바이" << endl; }
//};
//
//
//class VehicleFactory {
//public:
//	virtual Car* createCar() = 0;
//	virtual Bike* createBike() = 0;
//};
//
//class DomesticFactory : public VehicleFactory {
//public:
//	Car* createCar() override { return new DomesticCar(); }
//	Bike* createBike() override { return new DomesticBike(); }
//};
//
//class ForeignFactory : public VehicleFactory {
//public:
//	Car* createCar() override { return new ForeignCar(); }
//	Bike* createBike() override { return new ForeignBike(); }
//};
//
//int main()
//{
//	DomesticFactory f1;
//	Car* car = f1.createCar();
//	Bike* bike = f1.createBike();
//
//	car->print();
//	bike->print();
//
//	delete car;
//	delete bike;
//
//
//	ForeignFactory f2;
//	car = f2.createCar();
//	bike = f2.createBike();
//
//	car->print();
//	bike->print();
//
//	delete car;
//	delete bike;
//
//	return 0;
//}