//#include <iostream>
//#include <string>
//
//class Base
//{
//	std::string s;
//
//public:
//	Base() : s("기반") { std::cout << "기반 클래스" << std::endl; }
//
//	void what() { std::cout << s << std::endl; }
//	// 가상 함수(virtual 키워드가 붙은 함수)는
//	// 런타임(실행) 시간에 어떤함수가 실행될지 결정하는 동적 바인딩을
//	// 시켜준다.
//	virtual void what2() { std::cout << "동적바인딩 " << s << std::endl; }
//};
//
//class Derived : public Base
//{
//	std::string s;
//
//public:
//	Derived() : s("파생"), Base() { std::cout << "파생 클래스" << std::endl; }
//
//	void what() { std::cout << s << std::endl; }
//	// override 키워드는 이 함수가 위에서 재정의된 함수가 맞는지 컴파일 시간에 확인해 준다.
//	// void what2() const override { std::cout << "동적바인딩 " << s << std::endl; }
//	void what2() override { std::cout << "동적바인딩 " << s << std::endl; }
//};
//
//int main()
//{
//	Base p;
//	Derived c;
//
//	std::cout << "=== 일반 버전 ===" << std::endl;
//	c.what();
//	c.what2();
//	std::cout << "=== 포인터 버전 ===" << std::endl;
//
//	Base* p_c = &c; // UpCasting
//	p_c->what();
//	p_c->what2();
//
//	return 0;
//}