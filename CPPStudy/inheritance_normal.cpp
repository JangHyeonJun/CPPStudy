//#include <iostream>
//#include <string>
//
//class Base
//{
//	std::string s;
//
//public:
//	Base() : s("���") { std::cout << "��� Ŭ����" << std::endl; }
//
//	void what() { std::cout << s << std::endl; }
//	// ���� �Լ�(virtual Ű���尡 ���� �Լ�)��
//	// ��Ÿ��(����) �ð��� ��Լ��� ������� �����ϴ� ���� ���ε���
//	// �����ش�.
//	virtual void what2() { std::cout << "�������ε� " << s << std::endl; }
//};
//
//class Derived : public Base
//{
//	std::string s;
//
//public:
//	Derived() : s("�Ļ�"), Base() { std::cout << "�Ļ� Ŭ����" << std::endl; }
//
//	void what() { std::cout << s << std::endl; }
//	// override Ű����� �� �Լ��� ������ �����ǵ� �Լ��� �´��� ������ �ð��� Ȯ���� �ش�.
//	// void what2() const override { std::cout << "�������ε� " << s << std::endl; }
//	void what2() override { std::cout << "�������ε� " << s << std::endl; }
//};
//
//int main()
//{
//	Base p;
//	Derived c;
//
//	std::cout << "=== �Ϲ� ���� ===" << std::endl;
//	c.what();
//	c.what2();
//	std::cout << "=== ������ ���� ===" << std::endl;
//
//	Base* p_c = &c; // UpCasting
//	p_c->what();
//	p_c->what2();
//
//	return 0;
//}