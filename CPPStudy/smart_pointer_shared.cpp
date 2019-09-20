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
//		cout << "자원을 획득함" << endl;
//	}
//	void DoSomething() { cout << "ggg" << endl; }
//	~A() { 
//		cout << "소멸자 호출" << endl;
//		delete[] data; 
//	}
//};
//
//int main()
//{
//	// unique_ptr 은 객체를 1개밖에 못 가지므로 아래 문법은 오류가 발생한다.
//	// unique_ptr<A> p1(new A());
//	// unique_ptr<A> p2(p1);
//
//	vector<shared_ptr<A>> vec;
//	vec.push_back(shared_ptr<A>(new A()));
//	vec.push_back(shared_ptr<A>(vec[0]));
//	vec.push_back(shared_ptr<A>(vec[1]));
//
//	// 벡터의 첫번째 원소를 소멸 시킨다.
//	std::cout << "첫 번째 소멸!" << std::endl;
//	vec.erase(vec.begin());
//
//	// 그 다음 원소를 소멸 시킨다.
//	std::cout << "다음 원소 소멸!" << std::endl;
//	vec.erase(vec.begin());
//
//	// 마지막 원소 소멸
//	std::cout << "마지막 원소 소멸!" << std::endl;
//	vec.erase(vec.begin());
//
//	
//	A* a = new A();
//	shared_ptr<A> pa1(a); // 주소로 shared ptr을 초기화하면
//	shared_ptr<A> pa2(a); // 참조 카운트를 제대로 세지 못한다.
//
//
//
//	return 0;
//}