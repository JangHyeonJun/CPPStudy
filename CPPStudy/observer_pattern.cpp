//#include <iostream>
//#include <string>
//
//using namespace std;
//
//const int MAX_OBSERVERS = 10;
//int Physics::physics_engine_num = 0;
//enum Event { PHYSICS, INPUT, SOUND };
//
//struct Entity {
//	string entity;
//	int time;
//	Entity() {}
//	Entity(string s, int i) : entity(s), time(i) {}
//};
//
//class Observer {
//public:
//	virtual ~Observer() {};
//	virtual void onNotify(const Entity& entity, Event event) = 0;
//};
//
//class Achievement : public Observer {
//	string achieve_name;
//public:
//	Achievement() :achieve_name(NULL) {}
//	Achievement(string s) : achieve_name(s) {}
//	~Achievement() {};
//	virtual void onNotify(const Entity& entity, Event event)
//	{
//		switch (event)
//		{
//		case PHYSICS:
//			cout << "[" << achieve_name << "]" << entity.entity << "객체에서 Physics 이벤트 발생 / 시간 : " << entity.time << endl;
//			break;
//		case INPUT:
//			cout << "[" << achieve_name << "]" << entity.entity << "객체에서 Input 이벤트 발생 / 시간 : " << entity.time << endl;
//			break;
//		case SOUND:
//			cout << "[" << achieve_name << "]" << entity.entity << "객체에서 Sound 이벤트 발생 / 시간 : " << entity.time << endl;
//			break;
//		default:
//			break;
//		}
//	}
//};
//
//class Subject {
//private:
//	Observer* observers[MAX_OBSERVERS];
//	int numObservers;
//
//protected:
//	void notify(const Entity& entity, Event event) {
//		for (int i = 0; i < numObservers; i++)
//			observers[i]->onNotify(entity, event);
//	}
//
//public:
//	Subject() { numObservers = 0; }
//	void addObserver(Observer* observer)
//	{
//		observers[numObservers] = observer;
//		numObservers++;
//		cout << "관찰자 등록 (등록된 개수 : " << numObservers<< " )" << endl;
//	}
//	void removeObserver(Observer* observer)
//	{
//		int i = 0;
//		for (; i <= numObservers; i++)
//			if (observers[i] == observer)
//				break;
//		for (; i < numObservers; i++)
//			observers[i] = observers[i + 1];
//		observers[numObservers] = nullptr;
//		numObservers--;
//		cout << "관찰자 삭제 (등록된 개수 : " << numObservers + 1 << " )" << endl;
//	}
//
//};
//
//class Physics : public Subject {
//	Entity entity;
//public:
//	static int physics_engine_num;
//	Physics() {
//		entity = Entity("Physics" + to_string(physics_engine_num), 0);
//		physics_engine_num++;
//	}
//	void update() {
//		notify(entity, Event::PHYSICS);
//		entity.time++;
//	}
//};
//int main()
//{
//
//	Physics p1;
//
//	Achievement* achievement_arr[10];
//	for (int i = 0; i < 10; i++)
//		achievement_arr[i] = new Achievement("achieve" + to_string(i));
//
//	for (int i = 0; i < 5; i++)
//		p1.addObserver(achievement_arr[i]);
//
//	for (int i = 0; i < 5; i++)
//		p1.update();
//
//	for (int i = 0; i < 2; i++)
//		p1.removeObserver(achievement_arr[i]);
//
//	for (int i = 0; i < 5; i++)
//		p1.update();
//
//	for (int i = 2; i < 5; i++)
//		p1.removeObserver(achievement_arr[i]);
//
//	return 0;
//}