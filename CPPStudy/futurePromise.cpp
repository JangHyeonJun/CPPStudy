#include <future>
#include <iostream>
#include <string>
#include <thread>
using std::string;

void worker(std::promise<string>* p)
{
	p->set_value("some data");
	std::this_thread::sleep_for(std::chrono::seconds(1));
	std::cout << "������" << std::endl;
}

int main()
{
	std::promise<string> p;
	std::future<string> data = p.get_future();

	std::thread t(worker, &p);

	data.wait();

	std::cout << "���� ������ : " << data.get() << std::endl;
	// std::cout << "data �� �̹� move �Ͽ����Ƿ� ���� �߻� : " << data.get() << std::endl;

	t.join();
}
