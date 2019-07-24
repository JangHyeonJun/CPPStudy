//#include <iostream>
//
//class D
//{
//public:
//	int d;
//
//	D() { std::cout << "D 생성자 호출" << std::endl; }
//};
//
//// virtual 키워드로 상속받을 경우
//// 기반 클래스의 내용이 항상 1번만 포함되도록 한다.
//class A : public virtual D
//{
//public:
//	int a;
//	
//	A() { std::cout << "A 생성자 호출" << std::endl; }
//};
//
//class B : public virtual D
//{
//public:
//	int b;
//	
//	B() { std::cout << "B 생성자 호출" << std::endl; }
//};
//
//// 클래스 B와 클래스 A를 차례대로 다중 상속
//// B와 A는 모두 D라는 클래스를 상속받고 이를 또 C가 상속받았으므로
//// 기반 클래스가 겹치는 경우를 다이아몬드 상속이라고 한다
//class C : public B, public A
//{
//public:
//	int c;
//
//	C() { std::cout << "C 생성자 호출" << std::endl; }
//};
//
//// 생성자 호출 순서는 상속받은 순서에 따라 정해진다.
//int main() { C c; }