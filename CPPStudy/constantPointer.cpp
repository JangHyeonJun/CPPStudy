//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int val = 20;
//	int val2 = 10;
//	//// 포인터(pointer)
//	//int *p = &val;
//
//	// 상수 포인터(constant pointer) const(상수 키워드)의 위치에 따라 바뀔수 없는 값이 존재
//	// 포인터를 나타내는 *가 const 보다 뒤에 있을경우 가리키는 값을 변경 못하고 
//  // *이 const보다 앞에 있을 경우 포인터의 주소 값을 변경 못한다.
//
//	//const int *p = &val;
//	//p = &val2; // 정상
//	//*p = 30; // 오류
//	
//	//int* const p = &val;
//	//p = &val2; // 오류
//	//*p = 30; // 정상
//
//	//cout << "*p:" << *p << "  p:" << p;
//
//	return 0;
//}