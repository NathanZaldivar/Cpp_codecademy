#include <iostream>
#include <vector>

// Define first_three_multiples() here:
std::vector<int> first_three_multiples(int num) {

  std::vector<int> results;

  for (int i = 1; i < 4; i++) {

    results.push_back(i * num);

  }

  return results;

}

int main() {
  
  for (int element : first_three_multiples(8)) {
    std::cout << element << "\n";
  }
  
}
