//#include <chrono>
//#include <iostream>
//#include <mutex>
//#include <queue>
//#include <string>
//#include <thread>
//#include <vector>
//
//using namespace std;
//
//void producer(queue<string>* downloaded_pages, mutex* m, int index)
//{
//	for (int i = 0; i < 5; i++)
//	{
//		this_thread::sleep_for(chrono::milliseconds(100 * index));
//		string content = "웹사이트 : " + to_string(i) + " from thread(" +
//			to_string(index) + ")\n";
//
//		m->lock();
//		downloaded_pages->push(content);
//		m->unlock();
//	}
//}
//
//void consumer(queue<string>* downloaded_pages, mutex* m, int* num_processed)
//{
//	while (*num_processed < 25)
//	{
//		m->lock();
//		if (downloaded_pages->empty())
//		{
//			m->unlock();
//			this_thread::sleep_for(chrono::microseconds(10));
//			continue;
//		}
//
//		string content = downloaded_pages->front();
//		downloaded_pages->pop();
//
//		(*num_processed)++;
//		m->unlock();
//
//		cout << content;
//		this_thread::sleep_for(chrono::milliseconds(80));
//	}
//}
//
//int main()
//{
//	queue<string> downloaded_pages;
//	mutex m;
//
//	vector<thread> producers;
//	for (int i = 0; i < 5; i++)
//		producers.push_back(thread(producer, &downloaded_pages, &m, i + 1));
//
//	int num_processed = 0;
//	vector<thread> consumers;
//
//	for (int i = 0; i < 3; i++)
//		consumers.push_back(thread(consumer, &downloaded_pages, &m, &num_processed));
//
//	for (int i = 0; i < 5; i++)
//		producers[i].join();
//	for (int i = 0; i < 3; i++)
//		consumers[i].join();
//
//	return 0;
//}