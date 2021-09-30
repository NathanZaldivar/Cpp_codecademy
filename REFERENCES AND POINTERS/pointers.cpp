#include <iostream>

int main() {
  
  int power = 9000;
  
  // Create pointer

  int* ptr = &power;
  
  std::cout << ptr;

  std::cout << "\n";

  //same output

  std::cout << &power;
  
  
  // Print ptr
  // 0x7ffe42d760cc
  // 0x7ffe42d760cc
  
  
}
