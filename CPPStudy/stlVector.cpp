//#include <iostream>
//#include <vector>
//
//template <typename T>
//void print_vector(std::vector<T>& vec)
//{
//	for (typename std::vector<T>::iterator iter = vec.begin(); iter != vec.end(); iter++)
//		std::cout << *iter << std::endl;
//	std::cout << "--------------------------" << std::endl;
//}
//
//template <typename T>
//void reverse_print_vector(std::vector<T>& vec)
//{
//	for (typename std::vector<T>::reverse_iterator iter = vec.rbegin(); iter != vec.rend(); iter++)
//		std::cout << *iter << std::endl;
//	std::cout << "--------------------------" << std::endl;
//}
//
//template <typename T>
//void range_print_vector(std::vector<T>& vec)
//{
//	for (const auto& elem : vec)
//		std::cout << elem << std::endl;
//}
//
//int main()
//{
//	std::vector<int> vec;
//	vec.push_back(10);
//	vec.push_back(20);
//	vec.push_back(30);
//
//	std::cout << "처음 벡터 상태" << std::endl;
//	print_vector(vec);
//
//	// vec[2] 앞에 15, 17 추가
//	vec.insert(vec.begin() + 2, { 15, 17 });
//	print_vector(vec);
//
//	// vec[3] 제거
//	vec.erase(vec.begin() + 3);
//	print_vector(vec);
//
//	std::vector<int>::iterator iter = vec.begin() + 2;
//	std::cout << "3 번째 원소 = " << *iter << std::endl;
//
//
//	std::cout << "역순으로 출력" << std::endl;
//	reverse_print_vector(vec);
//
//
//	std::cout << "범위 기반 출력(range based for loop)(C++ 11)" << std::endl;
//	range_print_vector(vec);
//
//	return 0;
//}