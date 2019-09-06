//#include <iostream>
//#include <string>
//#include <sstream>
//#include <map>
//
//using namespace std;
//
//int main()
//{
//	map<string, int> m;
//	m.insert(make_pair("Muzi", 1234));
//	cout << m["a"] << m["Muzi"] << endl;
//
//	//string s1 = "apple grape pear";
//	//stringstream ss(s1);
//	//string s2;
//	//while (ss >> s2)
//	//{
//	//	cout << s2 << endl;
//	//}
//
//	string s1 = "apple/grape/pear";
//	string s2;
//	char delimiter = '/';
//	while (!s1.empty())
//	{
//		if (s1.find(delimiter) != string::npos)
//		{
//			s2 = s1.substr(0, s1.find(delimiter));
//			s1.erase(s1.begin(), s1.begin() + s2.length() + 1);
//		}
//		else
//		{
//			s2 = s1;
//			s1.clear();
//		}
//		
//		cout << s2 << endl;
//	}
//
//	return 0;
//}