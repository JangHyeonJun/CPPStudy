//#include <iostream>
//#include <thread>
//
//using namespace std;
//
//void func1()
//{
//	for (int i = 0; i < 100; i++)
//		cout << "쓰레드 1 작동\n";
//}
//
//void func2()
//{
//	for (int i = 0; i < 100; i++)
//		cout << "쓰레드 2 작동\n";
//}
//
//void func3()
//{
//	for (int i = 0; i < 100; i++)
//		cout << "쓰레드 3 작동\n";
//}
//
//int main()
//{
//	thread t1(func1);
//	thread t2(func2);
//	thread t3(func3);
//
//	t1.join(); // t1이 종료될 때까지 기다린후 반환하는 함수
//	t2.detach(); // 메인함수가 종료되도 쓰레드를 남기는 함수
//	t3.detach();
//
//	cout << "메인 함수 종료\n";
//}