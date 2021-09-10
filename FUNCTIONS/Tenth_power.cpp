#include <iostream>
#include <cmath>

// Define tenth_power() here:
int tenth_power(int num) {
  
  int total = num;

  for (int i = 1; i < 10; i++) {
    
    total = total * num;

  }

  return total;

}



int main() {
  
  std::cout << tenth_power(0) << "\n";
  std::cout << tenth_power(1) << "\n";
  std::cout << tenth_power(2) << "\n";
  
}
