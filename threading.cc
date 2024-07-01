#include<iostream>
//#include<thread>
#include<future>
//#include <algorithm>

void assign_val(int a){
        std::cout << "value is a="<<a<<std::endl;
}

void create_thread(int num){
	for(int i=0; i < num; ++i){
		std::async(assign_val, i);
	}
}

int main(){
//	std::thread th[100];
	/*for(int i =0; i < 100; ++i){
		th[i] = std::thread(assignVal, i);
		th[i].join();
	}
	*/
	auto temp = std::async(create_thread, 10000);
	return 0;
}
	
