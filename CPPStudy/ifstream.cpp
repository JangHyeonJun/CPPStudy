//#include <fstream>
//#include <iostream>
//#include <string>
//
//int main()
//{
//	std::ifstream in("test.txt");
//	char buf[100];
//
//	if (!in.is_open())
//	{
//		std::cout << "������ ã�� �� �����ϴ�!" << std::endl;
//		return 0;
//	}
//
//	while (in)
//	{
//		in.getline(buf, 100);
//		std::cout << buf << std::endl;
//	}
//
//
//	//std::ifstream in("test.txt", std::ios::binary);
//	//std::string s;
//
//	//if (in.is_open())
//	//{
//	//	in.seekg(0, std::ios::end);
//	//	int size = in.tellg();
//	//	s.resize(size);
//	//	in.seekg(0, std::ios::beg);
//	//	in.read(&s[0], size);
//	//	std::cout << s << std::endl;
//	//}
//	//else
//	//	std::cout << "������ ã�� �� �����ϴ�!" << std::endl;
//
//	return 0;
//}