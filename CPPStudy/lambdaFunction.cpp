//#include <algorithm>
//#include <functional>
//#include <iostream>
//#include <string>
//#include <vector>
//
//template <typename Iter>
//void print(Iter begin, Iter end)
//{
//	while (begin != end)
//	{
//		std::cout << "[" << *begin << "] ";
//		begin++;
//	}
//	std::cout << std::endl;
//}
//int main() {
//	std::vector<int> vec;
//	vec.push_back(5);
//	vec.push_back(3);
//	vec.push_back(1);
//	vec.push_back(2);
//	vec.push_back(3);
//	vec.push_back(4);
//
//	std::cout << "처음 vec 상태 -----" << std::endl;
//	print(vec.begin(), vec.end());
//
//	std::cout << "벡터에서 홀수인 원소 제거 --- " << std::endl;
//	vec.erase(std::remove_if(vec.begin(), vec.end(),
//		[](int i) -> bool { return i % 2 == 1; }),
//		vec.end());
//	// 또는 [](int i) {return i%2 == 1;} 로 써도 된다.
//	// [](int i){return i%2 == 1;}(3) 이런식으로 바로 호출해도 된다.
//	print(vec.begin(), vec.end());
//
//	// auto와 람다 함수를 사용하여 함수 객체를 생성할 수 있다.
//	auto is_odd = [](int i) {return i % 2 == 1; };
//	std::cout << "5는 짝수이다 : " << is_odd(5) << std::endl;
//		
//}