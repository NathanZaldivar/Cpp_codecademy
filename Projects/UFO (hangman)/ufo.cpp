// TESTING

#include <iostream>
#include "ufo_functions.hpp"

int main() {

  std::string codeword = lower(codeword_chooser());
  hide();
  std::string answer = codeword_ghost(codeword);

  int misses = 0;
  int miss_limit = 7;

  bool debug = false;
  bool codeword_choice;

  greet();

  while (answer != codeword && misses < miss_limit && debug == false) {

    display_misses(misses);

    long_print(answer);

    char choice = input("Letter: ", 'c');

    int ind = index(codeword, choice);

    int ind_answer = index(answer, choice);

    // ind is used to determine if the user got the answer correct, -1 indicates that the char can not be found in the selected string, See ufo_functions.cpp.

    if (ind == -1 && ind_answer == -1) {

      print("incorrect! " + str((miss_limit - 1) - misses) + " Tries remaining.");

      misses++;

    } else if (ind != -1 && ind_answer == -1) {

      answer = answer_builder(answer, codeword, choice);

      print("Correct!");

    } else {

      print("Character already chosen! Restarting.");

    }
  }
// Debug sandbox

// Debug sandbox
  if (answer == codeword) {

    print("Congragulations you won!");

  } else {

    print("The UFO flies away! GAME OVER");

  }

  print("Codeword was " + codeword);

  char play_again = lower(input("play again?[y or n] ", 'c'));

  if (play_again == 'y') {

    main();

  }
}
