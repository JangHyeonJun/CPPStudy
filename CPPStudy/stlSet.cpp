//#include <iostream>
//#include <set>
//
//template <typename T>
//void print_set(std::set<T>& s)
//{
//	std::cout << " [";
//	for (typename std::set<T>::iterator iter = s.begin(); iter != s.end(); iter++)
//		std::cout << *iter << " ";
//	std::cout << "] " << std::endl;
//}
//
//int main()
//{
//	std::set<int> s;
//	s.insert(10);
//	s.insert(50);
//	s.insert(40);
//	s.insert(20);
//	s.insert(30);
//
//	std::cout << "������� ���ĵż� ���´�" << std::endl;
//	print_set(s);
//
//	std::cout << "20 �� s �� �����̴� = ";
//	auto iter = s.find(20);
//	if (iter != s.end())
//		std::cout << " True " << std::endl;
//	else
//		std::cout << " False " << std::endl;
//
//	std::cout << "60 �� s �� �����̴� = ";
//	iter = s.find(60);
//	if (iter != s.end())
//		std::cout << " True " << std::endl;
//	else
//		std::cout << " False " << std::endl;
//}