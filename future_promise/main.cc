#include <future>
#include <iostream>
#include <thread>
#include <utility>
#include <chrono>

void product(std::promise<int>&& prodPromise, int a, int b) {
	prodPromise.set_value(a*b);
}

struct Div {
	void operator()(std::promise<int>&& divPromise, int a, int b) const {
 		divPromise.set_value(a/b);
	}	
};

int main() {
	int a = 20;
	int b = 10;
	std::cout << std::endl;
	std::promise<int> prodPromise;
	std::promise<int> divPromise;
	std::future<int> prodResult = prodPromise.get_future();
	std::future<int> divResult = divPromise.get_future();
	std::thread prodThread(product, std::move(prodPromise), a, b);
	Div div;
	std::thread divThread(div, std::move(divPromise), a, b);
	std::cout << "20*10= "<< prodResult.get() << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(1));
	std::cout << "20/10= "<<divResult.get() <<std::endl;
	prodThread.join();
	divThread.join();
	std::cout << std::endl;
	return 0;
}
