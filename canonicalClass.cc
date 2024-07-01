#include "canonicalClass.h"

MyClass::MyClass():data(0){
	std::cout <<"Un-parametrized consutor"<<std::endl;
}

MyClass::MyClass(int val): data(val){
	std::cout <<"Parameterized constructor"<<std::endl;
}

MyClass::MyClass(const MyClass& obj): data(obj.data){
	std::cout <<"Copy constructor"<<std::endl;
}

MyClass& MyClass::operator=(const MyClass& obj) {
	std::cout<<"assignent operator"<<std::endl;
	if(this != &obj){
		data = obj.data;
	}
	return *this;
}

MyClass::~MyClass() {
	std::cout<<"MyClass destructor"<<std::endl;
}

bool MyClass::operator==(const MyClass& obj) const {
	return data == obj.data;
}

int main() {
	MyClass m1;
	MyClass m5(10);
	MyClass m2(m1);
//	MyClass m3 = m2;
//	MyClass m10;
	m5 = m1;
	if(m2 == m1){
		std::cout<<"objects are equal"<< std::endl;
	}else{
		std::cout<<"objects are not equal"<<std::endl;
	}
	return 0;
}
