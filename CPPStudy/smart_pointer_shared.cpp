//#include <iostream>
//#include <memory>
//#include <vector>
//using namespace std;
//
//class A
//{
//	int* data;
//public:
//	A() { 
//		data = new int[100];
//		cout << "�ڿ��� ȹ����" << endl;
//	}
//	void DoSomething() { cout << "ggg" << endl; }
//	~A() { 
//		cout << "�Ҹ��� ȣ��" << endl;
//		delete[] data; 
//	}
//};
//
//int main()
//{
//	// unique_ptr �� ��ü�� 1���ۿ� �� �����Ƿ� �Ʒ� ������ ������ �߻��Ѵ�.
//	// unique_ptr<A> p1(new A());
//	// unique_ptr<A> p2(p1);
//
//	vector<shared_ptr<A>> vec;
//	vec.push_back(shared_ptr<A>(new A()));
//	vec.push_back(shared_ptr<A>(vec[0]));
//	vec.push_back(shared_ptr<A>(vec[1]));
//
//	// ������ ù��° ���Ҹ� �Ҹ� ��Ų��.
//	std::cout << "ù ��° �Ҹ�!" << std::endl;
//	vec.erase(vec.begin());
//
//	// �� ���� ���Ҹ� �Ҹ� ��Ų��.
//	std::cout << "���� ���� �Ҹ�!" << std::endl;
//	vec.erase(vec.begin());
//
//	// ������ ���� �Ҹ�
//	std::cout << "������ ���� �Ҹ�!" << std::endl;
//	vec.erase(vec.begin());
//
//	
//	A* a = new A();
//	shared_ptr<A> pa1(a); // �ּҷ� shared ptr�� �ʱ�ȭ�ϸ�
//	shared_ptr<A> pa2(a); // ���� ī��Ʈ�� ����� ���� ���Ѵ�.
//
//
//
//	return 0;
//}