#include <iostream>

class MyString
{
	char* string_content;
	int string_length;
	int memory_capacity;
public:
	// ���ڷ� ����
	MyString(char c);
	// ���ڿ��� ����
	MyString(const char* str);
	// ���� ������
	MyString(const MyString& str);
	~MyString();

	void print();
	MyString& assign(const MyString& str);
	MyString& assign(const char* str);
	int capacity();
	// �Ҵ��� ���ڿ��� ũ�⸦ �̸� ������ ���� �Լ�
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
	// C ������ ���ڿ�(���� �ι��ڰ� �ִ�)�� �ƴ�
	// ���ڿ� �ش�Ǵ� �κи� �Է��ϱ� ���� strcpy �Լ��� ���� �ʴ´�.
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
	// �����Ϸ��� size�� ���� capacity ���� �۴ٸ� �ƹ��͵� ���ص� �ȴ�.
}
int main()
{
	MyString str1("Hello World!");
	MyString str2(str1);

	str1.print();
	str2.print();

	return 0;
}
