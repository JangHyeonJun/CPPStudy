//#include <iostream>
//#include <thread>
//
//using namespace std;
//
//void func1()
//{
//	for (int i = 0; i < 100; i++)
//		cout << "������ 1 �۵�\n";
//}
//
//void func2()
//{
//	for (int i = 0; i < 100; i++)
//		cout << "������ 2 �۵�\n";
//}
//
//void func3()
//{
//	for (int i = 0; i < 100; i++)
//		cout << "������ 3 �۵�\n";
//}
//
//int main()
//{
//	thread t1(func1);
//	thread t2(func2);
//	thread t3(func3);
//
//	t1.join(); // t1�� ����� ������ ��ٸ��� ��ȯ�ϴ� �Լ�
//	t2.detach(); // �����Լ��� ����ǵ� �����带 ����� �Լ�
//	t3.detach();
//
//	cout << "���� �Լ� ����\n";
//}