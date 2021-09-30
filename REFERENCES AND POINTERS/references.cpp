#include <iostream>

int main() {
  
  int soda = 99;

  int &pop = soda;

  pop++;

  std::cout << soda << "\n" << pop;

  // STDOUT //
  // 100
  // 100
  
  
  
}
