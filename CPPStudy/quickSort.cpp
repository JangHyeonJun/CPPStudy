//#include <iostream>
//
//using namespace std;
//
//
//void printArr(int* arr, int size)
//{
//	for (int i = 0; i < size; i++)
//		std::cout << arr[i] << ' ';
//	std::cout << endl;
//}
//
//int partition(int* arr, int left, int right)
//{
//	int pivot = (left + right) / 2;
//
//	// '<='�� �ƴ� '<'�� ���ԵǸ� pivot�� left �Ǵ� right�� ������
//	// ���� left ���� ������� �ʾ�, Ư����Ȳ���� ���ѷ����� �߻��ϰԵȴ�.
//	while (left <= right)
//	{
//		while (arr[left] < arr[pivot]) left++;
//		while (arr[right] > arr[pivot]) right--;
//		if (left <= right)
//		{
//			swap(arr[left], arr[right]);
//
//			left++;
//			right--;
//		}
//	}
//	return left;
//}
//void quickSort(int* arr, int left, int right)
//{
//	if (left < right)
//	{
//		int pivot = partition(arr, left, right);
//		//printArr(arr, 9);
//		//std::cout << "left: " << left << " right: " << right << " pivot: " << pivot << std::endl;
//		quickSort(arr, left, pivot - 1);
//		quickSort(arr, pivot, right);
//	}
//}
//
//void swap(int &a, int &b)
//{
//	int buf = a;
//	a = b;
//	b = buf;
//}
//
//int main()
//{
//	const int arrSize = 9;
//	int arr[arrSize] = { 9, 5, 1, 2, 4, 6, 8, 3, 7 };
//	printArr(arr, arrSize);
//	quickSort(arr, 0, arrSize-1);
//	printArr(arr, arrSize);
//	return 0;
//}