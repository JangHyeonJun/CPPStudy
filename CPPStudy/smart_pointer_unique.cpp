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
//		cout << "�ڿ��� ȹ����!" << endl;
//		data = new int[100];
//		data[0] = 1;
//	}
//	void some() { cout << "�Ϲ� �����Ϳ� �����ϰ� ���!" << endl; }
//	~A() {
//		cout << "�ڿ��� ������!" << endl;
//		delete[] data;
//	}
//};
//
//void do_something()
//{
//	unique_ptr<A> pa(new A());
//	unique_ptr<A> pb = move(pa); // ���� �����ڰ� ������ move�� ��ü ����.
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