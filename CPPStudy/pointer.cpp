//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int arrayA[5] = { 10, 20, 30, 40, 50 };
//	int *pA = arrayA;
//
//	while (pA - arrayA < sizeof(arrayA)/sizeof(int))
//	{
//		cout << *pA << ' ';
//		pA++;
//		// arrayA++; 배열의 이름은 배열의 첫번째 원소만 가르키는 포인터 상수이므로 수정불가능
//	}
//
//
//	return 0;
//}