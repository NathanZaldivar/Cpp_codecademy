#include <iostream>
#include <vector>

int main() {
  int odd_product = 1, even_sum = 0;
  std::vector<int> num = {2, 4, 3, 6, 1, 9};



  for (int i = 0; i < num.size(); i++) {
    if (num[i] % 2 == 0) {
      even_sum += num[i];
    } else {
      odd_product = odd_product * num[i];
    }
  }
  std::cout << "Sum of even numbers is " << even_sum << "\n";
  std::cout << "Product of odd numbers is " << odd_product << "\n";
}
