#include<iostream>
#include<map>

class A{
 public:
	int x;
	A(int a){
		x=a;
	}
};

int main(){
	std::map<int, A> mp;
	A a(10);
	A b(3);
	A c(18);
	mp[5] = a;
	mp[9] = b;
	mp[4] = c;
	for(auto itr : mp){
		std::cout<<itr->first << " "<<itr.second<<std::endl;
	}
	return 0;
}

