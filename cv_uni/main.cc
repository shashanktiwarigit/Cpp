#include<iostream>
#include<mutex>
#include <thread>

std::condition_variable cv;
std::mutex mtx;
bool ready;
bool processed;
std::string data;

void worker_thread() {
	{
		std::unique_lock<std::mutex> lk(mtx);
		cv.wait(lk, []{ return ready;});
		std::cout << "worker thread is processing data\n";
		data += " after processing";
		processed = true;
		std::cout << "Worker thread signals data processing completed\n";
		lk.unlock();
		cv.notify_one();
	}
}


int main() {
	std::thread worker(worker_thread);
	data = "Example data";
	{
		std::lock_guard<std::mutex> lk(mtx);
		ready = true;
		std::cout << "main signals data ready for processing\n";
	}
	cv.notify_one();
	{
		std::unique_lock<std::mutex> lk(mtx);
		cv.wait(lk, [] { return processed;});
	}
	std::cout << "back in main(), data = " <<data<<std::endl;
	worker.join();
	return 0;
}

