// promise example
#include <iostream>       // std::cout
#include <functional>     // std::ref
#include <thread>         // std::thread
#include <future>         // std::promise, std::future
#include<chrono>

void print_int_1 (std::future<int>& fut) {
  int x = fut.get();
  std::cout << "print-int_1 value: " << x << '\n';
}

void print_int (std::future<int>& fut) {
  int x = fut.get();
  std::cout << "print_int:value: " << x << '\n';
}

int main ()
{
  std::promise<int> prom;                      // create promise

  std::future<int> fut = prom.get_future();    // engagement with future

  std::thread th1 (print_int, std::ref(fut));  // send future to new thread
  std::thread th2(print_int_1, std::ref(fut));
  std::this_thread::sleep_for(std::chrono::milliseconds(10000));
  prom.set_value (10);                         // fulfill promise
                                     // (synchronizes with getting the future)
  th1.join();
  return 0;
}
