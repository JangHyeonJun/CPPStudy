//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class A {
//public:
//	int *data;
//
//	A() {
//		cout << "자원을 획득함!" << endl;
//		data = new int[100];
//		data[0] = 1;
//	}
//	void some() { cout << "일반 포인터와 동일하게 사용!" << endl; }
//	~A() {
//		cout << "자원을 해제함!" << endl;
//		delete[] data;
//	}
//};
//
//void do_something()
//{
//	unique_ptr<A> pa(new A());
//	unique_ptr<A> pb = move(pa); // 복사 생성자가 없지만 move로 대체 가능.
//	cout << pb->data[0] << endl;
//}
//
//int main()
//{
//	unique_ptr<A[]> ppa(new A[3]);
//	do_something();
//
//	return 0;
//}