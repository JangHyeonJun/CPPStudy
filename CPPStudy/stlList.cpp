//#include <iostream>
//#include <list>
//
//template <typename T>
//void print_list(std::list<T>& list)
//{
//	std::cout << "[ ";
//	for (const auto& data : list)
//		std::cout << data << " ";
//	std::cout << "]" << std::endl;
//}
//
//int main()
//{
//	std::list<int> list;
//
//	list.push_back(10);
//	list.push_back(20);
//	list.push_back(30);
//
//	std::cout << "처음 리스트의 상태: " << std::endl;
//	print_list(list);
//
//	for (std::list<int>::iterator iter = list.begin(); iter != list.end(); iter++)
//		if (*iter == 20)
//			list.insert(iter, 50);
//
//	std::cout << "값이 20 인 원소 앞에 50 을 추가" << std::endl;
//	print_list(list);
//
//	for (std::list<int>::iterator iter = list.begin(); iter != list.end(); iter++)
//		if (*iter == 30)
//		{
//			list.erase(iter);
//			break;
//		}
//
//	std::cout << "값이 30 인 원소를 제거한다." << std::endl;
//	print_list(list);
//
//	return 0;
//}