//#include <iostream>
//#include <string>
//
//
//// Functor 구조체/클래스에서 ()연산자를 구현하여 구조체/클래스를 마치 함수처럼 쓰는 기법
//template <typename T>
//struct Compare 
//{ bool operator()(const T& a, const T& b) const { return a < b; } };
//
//template <typename T, typename Comp = Compare<T>>
//T Min(T a, T b)
//{
//	Comp comp;
//	if (comp(a, b))
//		return a;
//	else 
//		return b;
//}
//
//int main()
//{
//	int a = 3, b = 5;
//	std::cout << "Min (" << a << " , " << b << ") = " << Min(a, b) << std::endl;
//
//	std::string s1 = "abc", s2 = "def";
//	std::cout << "Min (" << s1 << " , " << s2 << ") = " << Min(s1, s2)
//		<< std::endl;
//}