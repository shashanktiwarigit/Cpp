#include <iostream>
#include <vector>
#include <thread>

using namespace std;

void worker(int id, vector<int>& data){
	data[id] = id;
}

int main() {
	vector<int> data;
	vector<thread> workers;
	
	for(int i =0; i < 5; ++i) {
		workers.push_back(thread(worker, i, data));
	}

	for(auto a : workers){
		a.join();
	}
	for(auto a : data){
		cout << a <<endl;
	}
	return 0;
}
