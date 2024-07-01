#include<iostream>

class A{
	public:
		A() {
			std::cout << "default constructor"<<std::endl;
		}
		A(A& a){
			std::cout << "copy constructor"<<std::endl;
		}
		void print(A& a){
			std::cout<<"Print method"<<std::endl;
		}
};


int main()	{
	A a;
	A b = a;
	a.print(b);
	return 0;
}
