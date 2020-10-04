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


	std::cout << "받은 데이터 : " << data.get() << std::endl;
	// std::cout << "data 는 이미 move 하였으므로 에러 발생 : " << data.get() << std::endl;
	std::cout << "받은 데이터 : " << data.get() << "  (shared_future은 여러번 get가능)" << std::endl;

	t.join();
}
