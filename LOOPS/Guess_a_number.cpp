#include <iostream>
#include <stdlib.h>

int main() {

  srand (time(NULL));
 
  int computer = rand() % 10 + 1;
  int guess;
  int tries = 0;

  std::cout << "I have a number 1-10.\n";
  std::cout << "Please guess it: ";
  std::cin >> guess;
 
  // Write a while loop here:
  
  while (guess != computer && tries < 5) {

    std::cout << "Tries remaining [" << 5 - tries << "]\n\n";
    std::cout << "Wrong guess, try again: ";
    std::cin >> guess;

    tries++;


  }
  
  
  
  if (guess == computer) {
    
    std::cout << "You got it!\n";
  
  }  else {
    std::cout << "To0 many tries, GAME OVER!!!\n";
  }
}
