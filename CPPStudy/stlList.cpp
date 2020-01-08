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
//	std::cout << "ó�� ����Ʈ�� ����: " << std::endl;
//	print_list(list);
//
//	for (std::list<int>::iterator iter = list.begin(); iter != list.end(); iter++)
//		if (*iter == 20)
//			list.insert(iter, 50);
//
//	std::cout << "���� 20 �� ���� �տ� 50 �� �߰�" << std::endl;
//	print_list(list);
//
//	for (std::list<int>::iterator iter = list.begin(); iter != list.end(); iter++)
//		if (*iter == 30)
//		{
//			list.erase(iter);
//			break;
//		}
//
//	std::cout << "���� 30 �� ���Ҹ� �����Ѵ�." << std::endl;
//	print_list(list);
//
//	list.push_front(120);
//	std::cout << "���� 120 �� ���Ҹ� �տ� �߰�" << std::endl;
//	print_list(list);
//
//	list.push_back(1);
//	std::cout << "���� 1�� ���Ҹ� �ڿ� �߰�" << std::endl;
//	print_list(list);
//
//	list.sort();
//	std::cout << "����Ʈ�� �������� ����" << std::endl;
//	print_list(list);
//
//	list.sort(std::greater<int>());
//	std::cout << "����Ʈ�� �������� ����" << std::endl;
//	print_list(list);
//
//	return 0;
//}