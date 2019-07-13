#include <iostream>

class MyString
{
	char* string_content;
	int string_length;
	int memory_capacity;
public:
	// 문자로 생성
	MyString(char c);
	// 문자열로 생성
	MyString(const char* str);
	// 복사 생성자
	MyString(const MyString& str);
	~MyString();

	void print();
	MyString& assign(const MyString& str);
	MyString& assign(const char* str);
	int capacity();
	// 할당할 문자열의 크기를 미리 예약해 놓는 함수
	void reserve(int size);
};

MyString::MyString(char c)
{
	string_content = new char[1];
	memory_capacity = 1;
	string_content[0] = c;
	string_length = 1;
}
MyString::MyString(const char* str)
{
	string_length = strlen(str);
	string_content = new char[string_length];
	memory_capacity = string_length;
	// C 형식의 문자열(끝에 널문자가 있는)이 아닌
	// 문자에 해당되는 부분만 입력하기 위해 strcpy 함수를 쓰지 않는다.
	for (int i = 0; i < string_length; i++)
		string_content[i] = str[i];
}
MyString::MyString(const MyString& str)
{
	string_length = str.string_length;
	if (string_content != NULL)
		delete string_content;
	string_content = new char[string_length];
	memory_capacity = string_length;

	for (int i = 0; i < string_length; i++)
		string_content[i] = str.string_content[i];
}
MyString::~MyString() { delete[] string_content; }
void MyString::print()
{
	for (int i = 0; i < string_length; i++)
		std::cout << string_content[i];
	std::cout << std::endl;
}
MyString& MyString::assign(const MyString& str)
{
	if (str.string_length > memory_capacity)
	{
		delete[] string_content;
		string_content = new char[str.string_length];
		memory_capacity = str.string_length;
	}
	for (int i = 0; i < str.string_length; i++)
		string_content[i] = str.string_content[i];
	string_length = str.string_length;

	return *this;
}
MyString& MyString::assign(const char* str)
{
	int str_length = strlen(str);
	if (str_length > memory_capacity)
	{
		delete[] string_content;
		string_content = new char[str_length];
		memory_capacity = str_length;
	}
	for (int i = 0; i < str_length; i++)
		string_content[i] = str[i];

	string_length = str_length;

	return *this;
}
int MyString::capacity() { return memory_capacity; }
void MyString::reserve(int size)
{
	if (size > memory_capacity)
	{
		char *prev_string_content = string_content;

		string_content = new char[size];
		memory_capacity = size;

		for (int i = 0; i < string_length; i++)
			string_content[i] = prev_string_content[i];

		delete[] prev_string_content;
	}
	// 예약하려는 size가 현재 capacity 보다 작다면 아무것도 안해도 된다.
}
int main()
{
	MyString str1("Hello World!");
	MyString str2(str1);

	str1.print();
	str2.print();

	return 0;
}
