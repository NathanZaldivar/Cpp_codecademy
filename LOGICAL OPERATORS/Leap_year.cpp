#include <iostream>

int main() {

  int year;
  std::cout << "Enter current year: ";
  std::cin >> year;

  if (year < 9999 && year > 1000) {
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
      std::cout << "Leap year!\n";
    } else {
      std::cout << "Not a leap year!\n";
    }
  } else {
    std::cout << "Invalid year\n";
  }
}
