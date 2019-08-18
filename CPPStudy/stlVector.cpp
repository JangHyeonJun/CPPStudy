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
//	std::cout << "ó�� ���� ����" << std::endl;
//	print_vector(vec);
//
//	// vec[2] �տ� 15, 17 �߰�
//	vec.insert(vec.begin() + 2, { 15, 17 });
//	print_vector(vec);
//
//	// vec[3] ����
//	vec.erase(vec.begin() + 3);
//	print_vector(vec);
//
//	std::vector<int>::iterator iter = vec.begin() + 2;
//	std::cout << "3 ��° ���� = " << *iter << std::endl;
//
//
//	std::cout << "�������� ���" << std::endl;
//	reverse_print_vector(vec);
//
//
//	std::cout << "���� ��� ���(range based for loop)(C++ 11)" << std::endl;
//	range_print_vector(vec);
//
//	return 0;
//}