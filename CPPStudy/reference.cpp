//#include<iostream>
//
//
//void changeAge(int &Age)
//{
//	Age = Age - 10;
//}
//
//int iam(int &i)
//{
//	return i;
//}
//int& iam2(int &i)
//{
//	return i;
//}
//int main()
//{
//	int age = 26;
//	int &old = age;
//
//	changeAge(age);
//
//	std::cout << "How old are you?" << std::endl;
//	std::cout << "I'm " << old << std::endl;
//
//	int x = 5;
//	int& z = x;
//	const int& num = 5; // const 연산자를 붙이면 상수도 참조 가능
//	std::cout << num << std::endl;
//	std::cout << iam(x) << std::endl;
//	std::cout << ++iam2(x) << std::endl; // 레퍼런스를 리턴했기 때문에 값 변경도 가능 
//	return 0;
//}
//
