//#include <iostream>
//#include <deque>
//
//template <typename T>
//void print_deque(std::deque<T>& dq)
//{
//	std::cout << "[ ";
//	for (const auto& data : dq)
//		std::cout << data << " ";
//	std::cout << "] " << std::endl;
//}
//
//int main()
//{
//	std::deque<int> dq;
//
//	dq.push_back(10);
//	dq.push_back(20);
//	dq.push_back(30);
//
//	std::cout << "초기 dq 상태" << std::endl;
//	print_deque(dq);
//
//	std::cout << "맨 앞의 원소 제거" << std::endl;
//	dq.pop_front();
//	print_deque(dq);
//
//	return 0;
//}