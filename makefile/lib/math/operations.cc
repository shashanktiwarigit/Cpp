#include <exception>
#include <stdexcept>
#include <iostream>
#include "operations.hpp"

int math::operations::sum(const int& a, const int& b){
	return a+b;
}
int math::operations::sub(const int& a, const int& b){
	return a-b;
}
int math::operations::mul(const int& a, const int& b){
	return a*b;
}
int math::operations::div(const int& a, const int& b){
	return a/b;
}
