//#include <iostream>
//
//// Animal 클래스는 순수 가상 함수를 포함하고 있으므로
//// 객체(인스턴스)를 생성할 수 없으며
//// 상속 받는 클래스를 만들고 순수 가상 함수를 오버라이딩 한 후에
//// 파생클래스를 통해 객체를 생설할 수 있다.
//// 이러한 클래스를 추상 클래스(abstract class) 라고 한다.
//class Animal
//{
//public:
//	Animal(int i) { std::cout << "생성자 호출 : " << i << std::endl; }
//	Animal() { std::cout << "생성자 호출" << std::endl; }
//	virtual ~Animal() {}
//
//	// 순수 가상 함수 (pure virtual function)
//	// 반드시 오버라이딩 되어야 하는 함수
//	virtual void speak() = 0; 
//};
//
//class Dog : public Animal
//{
//public:
//	Dog() : Animal() {}
//	void speak() override { std::cout << "왈왈" << std::endl; }
//};
//
//class Cat : public Animal
//{
//public:
//	Cat() : Animal(10) {}
//	void speak() override { std::cout << "야옹야옹" << std::endl; }
//};
//
//int main()
//{
//	Animal* dog = new Dog();
//	Animal* cat = new Cat();
//	dog->speak();
//	cat->speak();
//
//	return 0;
//}