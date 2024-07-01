#include<iostream>
#include <memory>

class A: public std::enable_shared_from_this<A> {
	public:
		A() { std::cout <<"constructor of A" <<std::endl; }
		~A() { std::cout <<"destructor of A" << std::endl; }
		void print() {
			std::cout<<"Print()"<<std::endl;
			return;
		}
		std::shared_ptr<A> getSharedPtr() {
			return shared_from_this();
		}
};

int main() {
	std::shared_ptr<A> ptr = std::make_shared<A>();
	ptr->print();
	std::shared_ptr<A> ptr1 = ptr->getSharedPtr();
	ptr1->print();
	return 0;
}
