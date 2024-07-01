#include<iostream>

class MyClass {
  public:
	int a;
	MyClass(){
		a =10;
	}
	MyClass(MyClass&& other){
	}
	MyClass& operator=(MyClass&& other){
		return *this;
	}
};

int main(){
	MyClass obj1;
	std::cout<<obj1.a<<std::endl;
	MyClass obj2 = std::move(obj1);
	std::cout<<obj2.a<<std::endl;
	std::cout<<"obj1 "<<obj1.a<<std::endl;
	return 0;
}
