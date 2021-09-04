#include <iostream>
 
int main() {

  int multi1 = 3, multi2 = 5;



  for (int i = 1; i < 101; i++) {
    if (i % multi1 == 0 && i % multi2 == 0){
      std::cout << "FizzBuzz\n";
    } else if (i % multi1 == 0) {
      std::cout << "Fizz\n";
    } else if (i % multi2 == 0) {
      std::cout << "Buzz\n";
    } else {
      std::cout << i << "\n";
    }
  }
}
