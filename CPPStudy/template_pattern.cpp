//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Ramen
//{
//	virtual void addPowder() = 0;
//	virtual void addNoodle() = 0;
//	virtual void extra() {}
//	void addWater() { cout << "���� �ִ´�" << endl; }
//	void boil() { cout << "���δ�" << endl; }
//public:
//	void makeRamen()
//	{
//		addWater();
//		addNoodle();
//		addPowder();
//		boil();
//		extra();
//		cout << "��� �ϼ�! " << "\n\n";
//	}
//};
//
//class SesameRamen : public Ramen
//{
//	void addPowder() override {
//		cout << "���� ��� ������ �ִ´�" << endl;
//	}
//	void addNoodle() override {
//		cout << "���� �ִ´�" << endl;
//	}
//};
//
//class JjajangRamen : public Ramen
//{
//	void addPowder() override {
//		cout << "¥�� ��� ������ �ִ´�" << endl;
//	}
//	void addNoodle() override {
//		cout << "���� �ִ´�" << endl;
//	}
//	void extra() override {
//		cout << "���� ������" << endl;
//	}
//};
//
//int main()
//{
//	Ramen* r1 = new SesameRamen();
//	Ramen* r2 = new JjajangRamen();
//
//	r1->makeRamen();
//	r2->makeRamen();
//}