#include <iostream>
#include "ufo_functions.hpp"

int main() {

  std::string codeword = "codecademy";
  std::string answer = "__________";

  int misses = 0;

  greet();

  while (answer != codeword && misses < 7) {

    char letter = input_str("Letter: ");


    

    








    misses++;

  }

  if (answer == codeword) {
    
    print("Hooray! You saved the person and earned a medal of honor!");

  } else {

    print("Oh no! The UFO just flew away with another person!");
  }
}
