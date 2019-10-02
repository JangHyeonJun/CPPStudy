//#include <iostream>
//#include <thread>
//#include <mutex>
//#include <vector>
//
//using namespace std;
//
//void worker(int& counter, mutex& m)
//{
//	for (int i = 0; i < 1000000; i++)
//	{
//		m.lock();
//		// Critical Section
//		counter += 1;
//		m.unlock();
//	}
//}
//
//void worker2(int& counter, mutex& m)
//{
//	for (int i = 0; i < 1000000; i++)
//	{
//		// 생성자에서 lock을 하고 소멸자에서 unlock 해주는 객체
//		lock_guard<mutex> lock(m);
//		// Critical Section
//		counter += 1;
//	}
//}
//
//int main()
//{
//	int counter = 0;
//	mutex m;
//
//	vector<thread> workers;
//	for (int i = 0; i < 4; i++)
//		workers.push_back(thread(worker, ref(counter), ref(m)));
//
//	for (int i = 0; i < 4; i++)
//		workers[i].join();
//
//	cout << "Counter : " << counter << endl;
//
//	return 0;
//}