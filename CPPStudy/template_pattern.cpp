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
//	void addWater() { cout << "물을 넣는다" << endl; }
//	void boil() { cout << "끓인다" << endl; }
//public:
//	void makeRamen()
//	{
//		addWater();
//		addNoodle();
//		addPowder();
//		boil();
//		extra();
//		cout << "라면 완성! " << "\n\n";
//	}
//};
//
//class SesameRamen : public Ramen
//{
//	void addPowder() override {
//		cout << "참깨 라면 스프를 넣는다" << endl;
//	}
//	void addNoodle() override {
//		cout << "면을 넣는다" << endl;
//	}
//};
//
//class JjajangRamen : public Ramen
//{
//	void addPowder() override {
//		cout << "짜장 라면 스프를 넣는다" << endl;
//	}
//	void addNoodle() override {
//		cout << "면을 넣는다" << endl;
//	}
//	void extra() override {
//		cout << "물을 버린다" << endl;
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