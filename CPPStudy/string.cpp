//#include <iostream>
//
//class MyString
//{
//	char* string_content;
//	int string_length;
//	int memory_capacity;
//public:
//	explicit MyString(int capacity);
//	// ���ڷ� ����
//	MyString(char c);
//	// ���ڿ��� ����
//	MyString(const char* str);
//	// ���� ������
//	MyString(const MyString& str);
//	~MyString();
//
//	int length();
//	void print();
//	MyString& assign(const MyString& str);
//	MyString& assign(const char* str);
//	int capacity();
//	// �Ҵ��� ���ڿ��� ũ�⸦ �̸� ������ ���� �Լ�
//	void reserve(int size);
//	char at(int i) const;
//	MyString& insert(int loc, const MyString& str);
//	MyString& insert(int loc, const char* str);
//	MyString& insert(int loc, const char c);
//	MyString& erase(int loc, int num);
//	
//	int find(int find_from, MyString& str) const;
//	int find(int find_from, const char* str) const;
//	int find(int find_from, const char c) const;
//	
//	int compare(const MyString& str) const;
//	bool operator==(MyString& str);
//};
//MyString::MyString(int capacity)
//{
//	string_content = new char[capacity];
//	memory_capacity = capacity;
//	string_length = 0;
//}
//MyString::MyString(char c)
//{
//	string_content = new char[1];
//	memory_capacity = 1;
//	string_content[0] = c;
//	string_length = 1;
//}
//MyString::MyString(const char* str)
//{
//	string_length = strlen(str);
//	string_content = new char[string_length];
//	memory_capacity = string_length;
//	// C ������ ���ڿ�(���� �ι��ڰ� �ִ�)�� �ƴ�
//	// ���ڿ� �ش�Ǵ� �κи� �Է��ϱ� ���� strcpy �Լ��� ���� �ʴ´�.
//	for (int i = 0; i < string_length; i++)
//		string_content[i] = str[i];
//}
//MyString::MyString(const MyString& str)
//{
//	string_length = str.string_length;
//	if (string_content != NULL)
//		delete string_content;
//	string_content = new char[string_length];
//	memory_capacity = string_length;
//
//	for (int i = 0; i < string_length; i++)
//		string_content[i] = str.string_content[i];
//}
//MyString::~MyString() { delete[] string_content; }
//int MyString::length() { return string_length; }
//void MyString::print()
//{
//	for (int i = 0; i < string_length; i++)
//		std::cout << string_content[i];
//	std::cout << std::endl;
//}
//MyString& MyString::assign(const MyString& str)
//{
//	if (str.string_length > memory_capacity)
//	{
//		delete[] string_content;
//		string_content = new char[str.string_length];
//		memory_capacity = str.string_length;
//	}
//	for (int i = 0; i < str.string_length; i++)
//		string_content[i] = str.string_content[i];
//	string_length = str.string_length;
//
//	return *this;
//}
//MyString& MyString::assign(const char* str)
//{
//	int str_length = strlen(str);
//	if (str_length > memory_capacity)
//	{
//		delete[] string_content;
//		string_content = new char[str_length];
//		memory_capacity = str_length;
//	}
//	for (int i = 0; i < str_length; i++)
//		string_content[i] = str[i];
//
//	string_length = str_length;
//
//	return *this;
//}
//int MyString::capacity() { return memory_capacity; }
//void MyString::reserve(int size)
//{
//	if (size > memory_capacity)
//	{
//		char *prev_string_content = string_content;
//
//		string_content = new char[size];
//		memory_capacity = size;
//
//		for (int i = 0; i < string_length; i++)
//			string_content[i] = prev_string_content[i];
//
//		delete[] prev_string_content;
//	}
//	// �����Ϸ��� size�� ���� capacity ���� �۴ٸ� �ƹ��͵� ���ص� �ȴ�.
//}
//char MyString::at(int i) const
//{
//	if (i >= string_length || i < 0)
//		return NULL;
//	else
//		return string_content[i];
//}
//MyString& MyString::insert(int loc, const MyString& str)
//{
//	// ������ ����� �Է��� ��� �ƹ��͵� �������� �ʰ� �״�� ��ȯ�Ѵ�.
//	if (loc <0 || loc > string_length)
//		return *this;
//
//	if (string_length + str.string_length > memory_capacity)
//	{
//		// ���� ���� �Ҵ��ؾ��� �޸𸮰� ���� �޸��� 2�躸�� ���ٸ�
//		// �̸� �޸𸮸� 2�� ���� �Ҵ��Ͽ� ����� �Ҵ�/������ ���´�.
//		if (memory_capacity * 2 > string_length + str.string_length)
//			memory_capacity *= 2;
//		else
//			memory_capacity = string_length + str.string_length;
//
//		char* prev_string_content = string_content;
//		string_content = new char[memory_capacity];
//
//		int i;
//		for (i = 0; i < loc; i++)
//			string_content[i] = prev_string_content[i];
//		for (int j = 0; j < str.string_length; j++)
//			string_content[i + j] = str.string_content[j];
//		for (; i < string_length; i++)
//			string_content[str.string_length + i] = prev_string_content[i];
//
//		delete[] prev_string_content;
//
//		string_length = string_length + str.string_length;
//	}
//	else
//	{
//		for (int i = string_length - 1; i >= loc; i--)
//			string_content[i + str.string_length] = string_content[i];
//		for (int i = 0; i < str.string_length; i++)
//			string_content[loc + i] = str.string_content[i];
//
//		string_length += str.string_length;
//	}
//
//	return *this;
//}
//MyString& MyString::insert(int loc, const char* str)
//{
//	MyString temp(str);
//	return insert(loc, temp);
//}
//MyString& MyString::insert(int loc, const char c)
//{
//	MyString temp(c);
//	return insert(loc, temp);
//}
//MyString& MyString::erase(int loc, int num)
//{
//	if (num < 0 || loc < 0 || loc > string_length)
//		return *this;
//
//	for (int i = loc + num; i < string_length; i++)
//		string_content[i - num] = string_content[i];
//
//	string_length -= num;
//
//	return *this;
//}
//int MyString::find(int find_from, MyString& str) const
//{
//	if (str.string_length == 0)
//		return -1;
//	
//	int i, j;
//	for (i = find_from; i < string_length; i++)
//	{
//		for (j = 0; j < str.string_length; j++)
//		{
//			if (string_content[i + j] != str.string_content[j])
//				break;
//		}
//
//		if (j == str.string_length)
//			return i;
//	}
//
//	return -1;
//}
//int MyString::find(int find_from, const char* str) const
//{
//	MyString temp(str);
//	return find(find_from, temp);
//}
//int MyString::find(int find_from, const char c) const
//{
//	MyString temp(c);
//	return find(find_from, c);
//}
//int MyString::compare(const MyString& str) const
//{
//	// 1�� (*this)�� ���������� �� �ڿ�, 0�� ����, -1�� �� �տ� ���´ٴ� �ǹ�.
//	for (int i = 0; i < __min(string_length, str.string_length); i++)
//	{
//		if (string_content[i] > str.string_content[i])
//			return 1;
//		else if (string_content[i] < str.string_content[i])
//			return -1;
//	}
//
//	if (string_length == str.string_length)
//		return 0;
//	else if (string_length > str.string_length)
//		return 1;
//	
//	return -1;
//}
//bool MyString::operator==(MyString& str)
//{
//	return !compare(str);
//}
//int main()
//{
//	/*MyString str1("very very very long string");
//	MyString str2("<some string inserted between>");
//
//	str1.reserve(30);
//
//	std::cout << "Capacity : " << str1.capacity() << std::endl;
//	std::cout << "String length : " << str1.length() << std::endl;
//	str1.print();
//	std::cout << std::endl;
//
//	str1.insert(5, str2);
//	str1.print();
//	std::cout << "Capacity : " << str1.capacity() << std::endl;
//	std::cout << "String length : " << str1.length() << std::endl;
//	std::cout << std::endl;
//
//	str1.insert(30, 'Z');
//	str1.print();
//	std::cout << "Capacity : " << str1.capacity() << std::endl;
//	std::cout << "String length : " << str1.length() << std::endl;
//	std::cout << std::endl;
//
//	str1.erase(11, 6);
//	str1.print();
//	std::cout << "Capacity : " << str1.capacity() << std::endl;
//	std::cout << "String length : " << str1.length() << std::endl;
//	std::cout << std::endl;
//
//	std::cout << "Location of first \"very\" in the string : " << str1.find(0, "very")
//		<< std::endl;
//
//	std::cout << "Location of second \"very\" in the string : " << str1.find(str1.find(0, "very") + 1, "very")
//		<< std::endl;
//
//	std::cout << std::endl;
//
//	std::cout << "Compare str1 and str2 : " << str1.compare(str2) << std::endl;
//*/
//
//	MyString str1("sentence");
//	MyString str2("sentence");
//
//	if (str1 == str2)
//		std::cout << "str1�� str2�� ����." << std::endl;
//	else
//		std::cout << "str1�� str2�� �ٸ���." << std::endl;
//
//	return 0;
//}
