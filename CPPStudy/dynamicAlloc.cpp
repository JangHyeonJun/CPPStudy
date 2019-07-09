//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	//// 동적할당
//	//int *p = new int;
//	//*p = 10;
//	//cout << *p << endl;
//	//delete p;
//
//	//// 지역변수 해제시 오류(Heap이 아닌 공간을 해제)
//	//int a = 5;
//	//delete &a;
//
//	// 배열 동적 할당
//	int *arr = new int[5];
//	for (int i = 0; i < 5; i++)
//		arr[i] = i + 1;
//	for (int i = 0; i < 5; i++)
//		cout << arr[i] << ' ';
//	delete[] arr;
//
//	return 0;
//}