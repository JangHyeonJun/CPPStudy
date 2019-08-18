//#include <iostream>
//#include <map>
//#include <string>
//
//template <typename K, typename V>
//void print_map(std::map<K, V>& m)
//{
//	for (auto iter = m.begin(); iter != m.end(); iter++)
//		std::cout << iter->first << " " << iter->second << std::endl;
//}
//
//int main()
//{
//	std::map<std::string, double> pitcher_list;
//
//	pitcher_list.insert(std::pair<std::string, double>("박세웅", 2.23));
//	pitcher_list.insert(std::pair<std::string, double>("해커", 2.93));
//	pitcher_list.insert(std::pair<std::string, double>("피어밴드", 2.95));
//
//	pitcher_list.insert(std::make_pair("차우찬", 3.04));
//	pitcher_list.insert(std::make_pair("장원준", 3.05));
//	pitcher_list.insert(std::make_pair("헥터", 3.09));
//
//	pitcher_list["니퍼트"] = 3.56;
//	pitcher_list["박종훈"] = 3.76;
//	pitcher_list["켈리"] = 3.90;
//
//	print_map(pitcher_list);
//	
//	std::cout << "니퍼트 방어율은? : " << pitcher_list["니퍼트"] << std::endl;
//
//	return 0;
//}