//#include <algorithm>
//#include <functional>
//#include <iostream>
//#include <string>
//#include <vector>
//
//template <typename Iter>
//void print(Iter begin, Iter end) {
//	while (begin != end) {
//		std::cout << "[" << *begin << "] ";
//		begin++;
//	}
//	std::cout << std::endl;
//}
//
//int main() {
//	std::vector<int> vec;
//	vec.push_back(5);
//	vec.push_back(3);
//	vec.push_back(1);
//	vec.push_back(2);
//	vec.push_back(3);
//	vec.push_back(4);
//
//	auto current = vec.begin();
//	while (true)
//	{
//		// find 함수는 컨테이너에 내장된 것을 사용하는 것이
//		// 성능에 좋다.
//		current = std::find(current, vec.end(), 3);
//		if (current == vec.end())
//			break;
//		std::cout << "3 은 " << std::distance(vec.begin(), current) + 1
//			<< " 번째 원소" << std::endl;
//		current++;
//	}
//
//	current = vec.begin();
//
//	while (true)
//	{
//		current = std::find_if(current, vec.end(),
//			[](int i) { return i % 3 == 2; });
//		if (current == vec.end())
//			break;
//		std::cout << "3 으로 나눈 나머지가 2 인 원소는 : "
//			<< *current << " 이다." << std::endl;
//		current++;
//	}
//
//	print(vec.begin(), vec.end());
//}