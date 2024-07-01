#include<iostream>

class MyClass {
	public:
		MyClass();
		MyClass(int value);
		MyClass(const MyClass& obj);
		MyClass& operator=(const MyClass& obj);
		bool operator==(const MyClass& obj) const;
		~MyClass();
	private:
		int data;

};
