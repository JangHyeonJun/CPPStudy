//#include <iostream>
//
//class D
//{
//public:
//	int d;
//
//	D() { std::cout << "D ������ ȣ��" << std::endl; }
//};
//
//// virtual Ű����� ��ӹ��� ���
//// ��� Ŭ������ ������ �׻� 1���� ���Եǵ��� �Ѵ�.
//class A : public virtual D
//{
//public:
//	int a;
//	
//	A() { std::cout << "A ������ ȣ��" << std::endl; }
//};
//
//class B : public virtual D
//{
//public:
//	int b;
//	
//	B() { std::cout << "B ������ ȣ��" << std::endl; }
//};
//
//// Ŭ���� B�� Ŭ���� A�� ���ʴ�� ���� ���
//// B�� A�� ��� D��� Ŭ������ ��ӹް� �̸� �� C�� ��ӹ޾����Ƿ�
//// ��� Ŭ������ ��ġ�� ��츦 ���̾Ƹ�� ����̶�� �Ѵ�
//class C : public B, public A
//{
//public:
//	int c;
//
//	C() { std::cout << "C ������ ȣ��" << std::endl; }
//};
//
//// ������ ȣ�� ������ ��ӹ��� ������ ���� ��������.
//int main() { C c; }