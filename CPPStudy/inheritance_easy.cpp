//#include <iostream>
//#include <string>
//
//
//class Base
//{
//	
//public:
//	std::string s;
//	Base() : s("��� Ŭ����") { std::cout << "��� Ŭ���� ������ ȣ��" << std::endl; }
//	
//	void who() { std::cout << "���� " << s << " �Դϴ�." << std::endl; }
//};
//
//class Derived : public Base
//{
//	std::string s;
//	std::string d;
//public:
//	Derived() : Base(), s("�Ļ� Ŭ����"), d("���")
//	{
//		std::cout << "�Ļ� Ŭ���� ������ ȣ��" << std::endl; 
//		who();
//
//		std::cout << s << " �� " << Base::s << " �� " << Derived::s << " �Դϴ�. " << d << std::endl;
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