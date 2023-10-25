#include <iostream>
using namespace std;

template <int num1, int num2>
struct add {
    static const int value = (num1 + num2);
};

int main() {
  const int a = 10, b = 20;
  const int r1 = add<a, b>::value;
  cout << "Sum is: " << r1 << endl;
  return 0;
}
