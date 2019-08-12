//#include <iostream>
//#include <string>
//
//template <typename T>
//void print(T arg) { std::cout << arg << std::endl; }
//
//// 템플릿 파라미터 팩(parameter pack) 사용
//// 템플릿의 0개 이상의 함수 인자를 나타낸다.
//template <typename T, typename... Types>
//void print(T arg, Types... args)
//{
//	std::cout << arg << ", ";
//	print(args...);
//}
//
//template <typename String>
//std::string StrCat(const String& s) { return std::string(s); }
//
//template <typename String, typename... Strings>
//std::string StrCat(const String& s, Strings... strs) { return std::string(s) + StrCat(strs...); }
//
//int main()
//{
//	std::cout << StrCat(std::string("this"), " ", "is", " ", std::string("a"),
//		" ", std::string("sentence"));
//}