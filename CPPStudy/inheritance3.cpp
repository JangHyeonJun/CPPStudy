//#include <iostream>
//
//// Animal Ŭ������ ���� ���� �Լ��� �����ϰ� �����Ƿ�
//// ��ü(�ν��Ͻ�)�� ������ �� ������
//// ��� �޴� Ŭ������ ����� ���� ���� �Լ��� �������̵� �� �Ŀ�
//// �Ļ�Ŭ������ ���� ��ü�� ������ �� �ִ�.
//// �̷��� Ŭ������ �߻� Ŭ����(abstract class) ��� �Ѵ�.
//class Animal
//{
//public:
//	Animal(int i) { std::cout << "������ ȣ�� : " << i << std::endl; }
//	Animal() { std::cout << "������ ȣ��" << std::endl; }
//	virtual ~Animal() {}
//
//	// ���� ���� �Լ� (pure virtual function)
//	// �ݵ�� �������̵� �Ǿ�� �ϴ� �Լ�
//	virtual void speak() = 0; 
//};
//
//class Dog : public Animal
//{
//public:
//	Dog() : Animal() {}
//	void speak() override { std::cout << "�п�" << std::endl; }
//};
//
//class Cat : public Animal
//{
//public:
//	Cat() : Animal(10) {}
//	void speak() override { std::cout << "�߿˾߿�" << std::endl; }
//};
//
//int main()
//{
//	Animal* dog = new Dog();
//	Animal* cat = new Cat();
//	dog->speak();
//	cat->speak();
//
//	return 0;
//}