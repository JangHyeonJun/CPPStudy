//#include <functional>
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int some_func1(const string& a)
//{
//	cout << "Func1 ȣ�� : " << a << endl;
//	return 0;
//}
//struct S {
//	void operator()(char c) { cout << "Func2 ȣ�� : " << c << endl; }
//};
//
//int main()
//{
//	std::function<int(const string&)> f1 = some_func1;
//	function<void(char)> f2 = S();
//	function<void()> f3 = []() {cout << "Func3 ȣ��" << endl; return 1; };
//
//	f1("hello");
//	f2('c');
//	f3();
//
//	return 0;
//}