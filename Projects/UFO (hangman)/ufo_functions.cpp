#include <iostream>
#include <vector>
#include <stdlib.h>
#include "ufo_functions.hpp"

//Greeting for the player
void greet() {

  print("=============");
  print("UFO: The Game");
  print("=============");
  print("Instructions: save your friend from alien abduction by");
  print("guessing the letters in the codeword.\n");

}


// TO DO:
// tweaks, finishes and uploads


void hide() {
  //Bad way to do this but hiding input is really complicated and im not trying to do all that.

  print("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

}

// creates a ghost string of codeword.
// TESTS:
// Function check PASSED : codeword_ghost("hello world") == "_____ _____"
std::string codeword_ghost(std::string codeword) {

  std::string results;

  for (int i = 0; i < codeword.size(); i++) {

    if (codeword[i] == ' ') {

      results += ' ';

    } else {

      results += '_';

    }
  }

  return results;

}




// string lower & char lower both return the lowercase version of input, if input is allready lowercase then input will be returned.
// TESTS:
// Function check PASSED : lower("HELLO") == "hello" && lower('C') == 'c'
std::string lower(std::string string) {

  std::string results;

  for (int i = 0; i < string.size(); i++) {

    char character = string[i];

    results += lower(character);

  }

  return results;

}

char lower(char character) {

  std::vector<char> upper = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
  std::vector<char> lower = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

  int ind;

  ind = index(upper, character);

  if (ind == -1) {

    return character;

  }

  return lower[ind];

}


// function returns a computer chosen codeword or a custom codeword
// TESTS:
// Function check PASSED : codeword_chooser() == "codecadmy" || "Custom codeword"
std::string codeword_chooser() {

  std::vector<std::string> codewords = {"codecadmy", "linux", "windows", "Hello world", "scooby doo", "super ninja", "aliens", "star ship", "raygun", "hurricane", "hardware", "software", "rock and roll"};

  std::string results;

  char choice;

  while (choice != 'y' || choice != 'n') {

    choice = lower(input("Choose your own codeword? Default will be pre selected. [y or n]: ", 'c'));

    if (choice == 'y') {

      std::cin.get(); // Removes any trailing new lines that prevent getline in input from working, trailing new line is from choice input

      results = input("Input codeword: ", "string");

      return results;

    } else if (choice == 'n') {

      srand (time(NULL));

      int computer = rand() % codewords.size();

      return codewords[computer];

    } else {

      print("Incorrect choice.");

    }
  }

  return "warning warning go away! warning warning you cant stay!"; // here to remove warning with non-void return when compiling

}

// replaces answer characters in codeword_ghost with its location in codeword
//TEST:
// Function check PASSED : answer_builder("_____", "hello", 'l') == "__ll_"
std::string answer_builder(std::string codeword_ghost, std::string codeword, char choice) {

  std::string results = codeword_ghost;

  int occurences = intcur(codeword, choice);

  for (int i = 0; i <= occurences; i++) {

    int position = index(codeword, choice, i);

    results = replace_char(results, choice, position);

  }

  return results;

}

// Replaces all matching characters with selected character
// TESTS:
// Function check PASSED : replace_all("hello", 'l', 'b') == "hebbo"
std::string replace_all(std::string selected_string, char character, char selected_character) {

  std::string results;

  for (int i = 0; i < selected_string.size(); i++) {

    if (selected_string[i] == character) {

      results += selected_character;

    } else {

      results += selected_string[i];

    }
  }

  return results;

}



// Replaces one character in a string, position is the location of which to replace the character
// TESTS:
// Function check PASSED : replace_char("hello", 'b', 2) == "heblo"
std::string replace_char(std::string selected_string, char character, int position) {

  std::string results;

  for (int i = 0; i < selected_string.size(); i++) {

    if (i == position) {

      results += character;

    } else {

      results += selected_string[i];

    }
  }

  return results;

}


// expected string input, second parameter must the expected data type, see examples.
//
// example outcomes of function check:
// std::string input("input hello: ", "string") == "hello"
// char input("input char: ", 'c') == 'c'
// int input("input 1: ", 0) == 1
//
// TESTS:
// Function check PASSED for * input
//
//expected string input
std::string input(std::string input_string, std::string type) {

  std::string input;

  print(input_string, false);

  std::getline(std::cin, input);

  return input;

}

//expected char input
char input(std::string input_string, char type) {

  char input;

  print(input_string, false);

  std::cin >> input;

  return input;

}

//expected int input
int input(std::string input_string, int type) {

  int input;

  print(input_string, false);

  std::cin >> input;

  return input;

}
// MSGSOCK007

// Finds all occurences
// TESTS:
// Function check PASSED : intcur("hello", 'l') == 2
int intcur(std::string string_data, char character) {

  int results = 0;

  for (int i = 0; i < string_data.size(); i++) {

    if (string_data[i] == character) {

      results++;

    }
  }

  return results;

}

// Function check PASSED : str(2) == "2"
std::string str(int integer) {

  std::string results = std::to_string(integer);

  return results;

}

// Function to Display misses
// Function check PASSED : Self explanatory
void display_misses(int misses) {

  if (misses == 0 || misses == 1) {

    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              /     \\        (  Send help! ) \n";
    std::cout << "             /   0   \\      / `-----------'  \n";
    std::cout << "            /  --|--  \\    /                 \n";
    std::cout << "           /     |     \\                     \n";
    std::cout << "          /     / \\     \\                   \n";
    std::cout << "         /               \\                   \n";

  }
  else if (misses == 2) {

    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              /  0  \\        (  Send help! ) \n";
    std::cout << "             / --|-- \\      / `-----------'  \n";
    std::cout << "            /    |    \\    /                 \n";
    std::cout << "           /    / \\    \\                    \n";
    std::cout << "          /             \\                    \n";
    std::cout << "         /               \\                   \n";

  }
  else if (misses == 3) {

    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              /--|--\\        (  Send help! ) \n";
    std::cout << "             /   |   \\      / `-----------'  \n";
    std::cout << "            /   / \\   \\    /                \n";
    std::cout << "           /           \\                     \n";
    std::cout << "          /             \\                    \n";
    std::cout << "         /               \\                   \n";

  }
  else if (misses == 3) {

    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              /--|--\\        (  Send help! ) \n";
    std::cout << "             /   |   \\      / `-----------'  \n";
    std::cout << "            /   / \\   \\    /                \n";
    std::cout << "           /           \\                     \n";
    std::cout << "          /             \\                    \n";
    std::cout << "         /               \\                   \n";

  }
  else if (misses == 4) {

    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              /  |  \\        (  Send help! ) \n";
    std::cout << "             /  / \\  \\      / `-----------' \n";
    std::cout << "            /         \\    /                 \n";
    std::cout << "           /           \\                     \n";
    std::cout << "          /             \\                    \n";
    std::cout << "         /               \\                   \n";

  }
  else if (misses == 5) {

    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              / / \\ \\        (  Send help! )\n";
    std::cout << "             /       \\      / `-----------'  \n";
    std::cout << "            /         \\    /                 \n";
    std::cout << "           /           \\                     \n";
    std::cout << "          /             \\                    \n";
    std::cout << "         /               \\                   \n";

  }
  else if (misses == 6) {

    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              /     \\        (  Send help! ) \n";
    std::cout << "             /       \\      / `-----------'  \n";
    std::cout << "            /         \\    /                 \n";
    std::cout << "           /           \\                     \n";
    std::cout << "          /             \\                    \n";
    std::cout << "         /               \\                   \n";

  }

}
