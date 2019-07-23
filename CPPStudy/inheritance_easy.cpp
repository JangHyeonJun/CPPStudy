//#include <iostream>
//#include <string>
//
//
//class Base
//{
//	
//public:
//	std::string s;
//	Base() : s("기반 클래스") { std::cout << "기반 클래스 생성자 호출" << std::endl; }
//	
//	void who() { std::cout << "저는 " << s << " 입니다." << std::endl; }
//};
//
//class Derived : public Base
//{
//	std::string s;
//	std::string d;
//public:
//	Derived() : Base(), s("파생 클래스"), d("룰루")
//	{
//		std::cout << "파생 클래스 생성자 호출" << std::endl; 
//		who();
//
//		std::cout << s << " 와 " << Base::s << " 와 " << Derived::s << " 입니당. " << d << std::endl;
//	}
//};
//
//int main()
//{
//	Base a;
//	Derived b;
//
//	return 0;
//}