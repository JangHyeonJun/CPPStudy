#include <future>
#include <iostream>
#include <string>
#include <thread>
using std::string;

void worker(std::promise<string>* p)
{
	std::this_thread::sleep_for(std::chrono::seconds(5));
	p->set_value("some data");
}

int main()
{
	std::promise<string> p;
	std::shared_future<string> data = p.get_future();

	std::thread t(worker, &p);

	while (true)
	{
		std::future_status status = data.wait_for(std::chrono::seconds(1));

		if (status == std::future_status::timeout)
		{
			std::cerr << ">";
		}
		else if (status == std::future_status::ready)
		{
			break;
		}
	}


	std::cout << "���� ������ : " << data.get() << std::endl;
	// std::cout << "data �� �̹� move �Ͽ����Ƿ� ���� �߻� : " << data.get() << std::endl;
	std::cout << "���� ������ : " << data.get() << "  (shared_future�� ������ get����)" << std::endl;

	t.join();
}
