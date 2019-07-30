//#include <string>
//
//using namespace std;
//
//class Vector
//{
//	string* data;
//	int capacity;
//	int length;
//
//public:
//	// 선언할 때 디폴트 인자를 명시 하였다면 구현할때는 명시하면 안된다.
//	Vector(int n = 1);
//	void push_back(string s);
//	string operator[](int i);
//	void remove(int x);
//
//	int size();
//
//	~Vector();
//};
//
//Vector::Vector(int n) : data(new string[n]), capacity(n), length(0) {}
//
//void Vector::push_back(string s)
//{
//	if (capacity <= length)
//	{
//		string* temp = new string[capacity * 2];
//		for (int i = 0; i < length; i++)
//			temp[i] = data[i];
//		delete[] data;
//		data = temp;
//		capacity *= 2;
//	}
//
//	data[length] = s;
//	length++;
//}
//
//string Vector::operator[](int i) { return data[i]; }
//
//void Vector::remove(int x)
//{
//	for (int i = x + 1; i < length; i++)
//		data[i - 1] = data[i];
//	length--;
//}
//
//int Vector::size() { return length; }
//
//Vector::~Vector()
//{
//	if (data)
//		delete[] data;
//}
//
