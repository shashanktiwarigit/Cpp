#include<iostream>
#include<functional>

void print_num(int i){
    std::cout << i << '\n';
}

std::function<const int&()> G([]()->int& {
	static int i{0x2A};
	return i;
	});

//std::function<const int&()> F([]()->int& { return 42; }); 

//std::function<void(int a, int b)> f([this]()-> void{
//	std::cout <<"a " << a <<" b"<<b <<std::endl;
//	return;
//});

int main(){
	//f(10,12);
//	const int a = F;
	std::function<void(int)> f_display = print_num;
	f_display(-1);
//	std::cout<<a<<std::endl;
	std::function<void(int)> f1 = [](int i)->{
    		std::cout << i << '\n';};
	f1(9);
	return 0;
}
