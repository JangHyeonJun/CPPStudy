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
//	std::cout << "ó�� vec ���� -----" << std::endl;
//	print(vec.begin(), vec.end());
//
//	std::cout << "���Ϳ��� Ȧ���� ���� ���� --- " << std::endl;
//	vec.erase(std::remove_if(vec.begin(), vec.end(),
//		[](int i) -> bool { return i % 2 == 1; }),
//		vec.end());
//	// �Ǵ� [](int i) {return i%2 == 1;} �� �ᵵ �ȴ�.
//	// [](int i){return i%2 == 1;}(3) �̷������� �ٷ� ȣ���ص� �ȴ�.
//	print(vec.begin(), vec.end());
//
//	// auto�� ���� �Լ��� ����Ͽ� �Լ� ��ü�� ������ �� �ִ�.
//	auto is_odd = [](int i) {return i % 2 == 1; };
//	std::cout << "5�� ¦���̴� : " << is_odd(5) << std::endl;
//		
//}