#include<iostream>

class MyClass {
public :
	MyClass() = default;
	MyClass(const MyClass& obj) : data(obj.data){
		std::cout << "MyClass is copyable"<<std::endl;
	}
	const MyClass& operator=(const MyClass& obj){
		std::cout << "MyClass is assignable"<<std::endl;
		if(this != &obj){
			data = obj.data;
		}
		return *this;
	}
private:
	int data;
};

int main() {
	MyClass m;
	MyClass m1(m);
	MyClass m2;
	m2 = m;
	return 0;
}
