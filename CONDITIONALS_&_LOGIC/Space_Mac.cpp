#include <iostream>

int main() {
  int weight, planet;
  std::cout << "Enter your weight on earth: ";
  std::cin >> weight;
  std::cout << "\nI have information for the following planets:\n\n";
  std::cout << "   1. Mecury   2. Venus    3. Mars\n";
  std::cout << "   4. Jupiter  5. Saturn  6. Uranus 7. Neptune\n\n";
  std::cout << "Enter the planet to fight: ";
  std::cin >> planet;

  switch (planet) {
    
    case 1:
      std::cout << "Mecury weight: " << weight * 0.38;
      break;
    case 2:
      std::cout << "Venus weight: " << weight * 0.91;
      break;
    case 3:
      std::cout << "Mars weight: " << weight * 0.38;
      break;
    case 4:
      std::cout << "Jupiter weight: " << weight * 2.34;
      break;
    case 5:
      std::cout << "Saturn weight: " << weight * 1.06;
      break;
    case 6:
      std::cout << "Uranus weight: " << weight * 0.92;
      break;
    case 7:
      std::cout << "Neptune weight: " << weight * 1.19;
      break;
    case 8:
      std::cout << "plutos wei- WAIT pluto isnt a planet!";
      break;
    default:
      std::cout << "Unknown planet\n";
      break;
  }
}
