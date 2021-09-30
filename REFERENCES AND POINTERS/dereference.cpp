#include <iostream>

int main() {
  
  int power = 9000;
  
  // Create pointer
  int *ptr = &power;
  
  // Print ptr
  std::cout << ptr << "\n";
  
  // Print *ptr

  std::cout << *ptr;

  //STDOUT
  // 0x7ffe6ebb360c 
  // 9000

  
  
}
