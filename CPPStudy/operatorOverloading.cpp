//#include <iostream>
//
//class Int;
//class Array;
//class Itreator;
//
//class Array
//{
//	friend Int;
//	friend Iterator;
//
//	
//	struct Address
//	{
//		int level;
//		void* next;
//	};
//	Address* top;
//public:
//	const int dim;
//	int* size;
//
//	Array(int dim, int* array_size);
//	Array(const Array& arr);
//	~Array();
//
//	Int operator[](const int index);
//
//	void initialize_address(Address *current);
//	void delete_address(Address *current);
//};
//class Int
//{
//	void* data;
//	int level;
//	Array* array;
//public:
//	Int(int index, int _level, void *_data, Array *_array);
//	Int operator[](const int index);
//	operator int()
//	{
//		if (data) return *static_cast<int *>(data);
//		return 0;
//	}
//};
//class Iterator
//{
//	int* location;
//	Array* arr;
//public:
//	Iterator& operator++();
//};
//Iterator& Iterator::operator++() {
//	if (location[0] >= arr->size[0]) return (*this);
//
//	bool carry = false;  // 받아 올림이 있는지
//	int i = arr->dim - 1;
//	do {
//		// 어차피 다시 돌아온다는 것은 carry 가 true
//		// 라는 의미 이므로 ++ 을 해야 한다.
//		location[i]++;
//		if (location[i] >= arr->size[i] && i >= 1) {
//			// i 가 0 일 경우 0 으로 만들지 않는다 (이러면 begin 과 중복됨)
//			location[i] -= arr->size[i];
//			carry = true;
//			i--;
//		}
//		else
//			carry = false;
//
//	} while (i >= 0 && carry);
//
//	return (*this);
//}
//Array::Array(int dim, int* array_size) : dim(dim)
//{
//	size = new int[dim];
//	for (int i = 0; i < dim; i++)
//		size[i] = array_size[i];
//	top = new Address;
//	top->level = 0;
//
//	initialize_address(top);
//}
//Array::Array(const Array& arr) : dim(arr.dim)
//{
//	size = new int[dim];
//	for (int i = 0; i < dim; i++)
//		size[i] = arr.size[i];
//	top = new Address;
//	top->level = 0;
//
//	initialize_address(top);
//}
//Array::~Array()
//{
//	delete_address(top);
//	delete[] size;
//}
//Int Array::operator[](const int index) { return Int(index, 1, static_cast<void *>(top), this); }
//void Array::initialize_address(Address *current)
//{
//	if (!current)
//		return;
//	if (current->level == dim - 1)
//	{
//		current->next = new int[size[current->level]];
//		return;
//	}
//	current->next = new Address[size[current->level]];
//	// static_cast<Address*> == (Address*) 스태틱 캐스팅
//	for (int i = 0; i < size[current->level]; i++)
//	{
//		(static_cast<Address*>(current->next))->level = current->level + 1;
//		initialize_address(static_cast<Address *>(current->next) + i);
//	}
//}
//void Array::delete_address(Address *current)
//{
//	if (!current) return;
//	for (int i = 0; i < size[current->level] && current->level < dim - 1; i++)
//		delete_address(static_cast<Address *>(current->next) + i);
//
//	delete[] current->next;
//}
//
//
//Int::Int(int index, int _level = 0, void *_data = nullptr, Array *_array = nullptr) : level(_level), data(_data), array(_array)
//{
//	if (_level < 1 || index >= array->size[_level - 1])
//	{
//		data = nullptr;
//		return;
//	}
//	if (level == array->dim)
//	{
//		// 마지막 배열일 경우 int를 저장
//		data = static_cast<void *>(static_cast<int *>(static_cast<Array::Address *>(data)->next) + index);
//	}
//	else
//	{
//		// 그렇지 않을 경우 Address 구조체를 저장
//		data = static_cast<void *>(static_cast<Array::Address *>(static_cast<Array::Address *>(data)->next) + index);
//	}
//}
//Int Int::operator[](const int index)
//{
//	if (!data) return 0;
//	return Int(index, level + 1, data, array);
//}
//
//
//int main() {
//	int size[] = { 2, 3, 4 };
//	Array arr(3, size);
//
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < 3; j++) {
//			for (int k = 0; k < 4; k++) {
//				arr[i][j][k] = (i + 1) * (j + 1) * (k + 1);
//			}
//		}
//	}
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < 3; j++) {
//			for (int k = 0; k < 4; k++) {
//				std::cout << i << " " << j << " " << k << " " << arr[i][j][k]
//					<< std::endl;
//			}
//		}
//	}
//}