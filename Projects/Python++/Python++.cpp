#include <iostream>
#include <vector>
#include <stdlib.h>
#include "header.hpp" // default header file name

int index(std::string data, char character, int skip_int) {

  int interval = 0;

  for (int i = 0; i < data.size(); i++) {

    if (data[i] == character) {

      if (interval == skip_int) {

        return i;

      } else {

        interval++;

      }
    }
  }

  return -1;

}

int index(std::string data, std::string character, int skip_int) {

  int interval = 0;
  int size = 0; // used to detirmine the exact size index needs to look for in the string, will be changed in the loop

  for (int i = 0; i < data.size(); i++) {

    if (data[i] == character[size]) {
      
      size++;

    } else {
      
      size = 0;
      continue;
      
    }
     
    if (size == character.size() && interval == skip_int) {
       
      return i - (size - 1);
       
    } else if (size != character.size()) {
       
      continue;
 
    } else {
       
      interval++;
      size = 0;
     
     }
    }

  return -1;

}


int index(std::vector<std::string> data, std::string character, int skip_int) {

  int interval = 0;

  for (int i = 0; i < data.size(); i++) {

    if (data[i] == character) {

      if (interval == skip_int) {

        return i;

      } else {

        interval++;

      }
    }
  }

  return -1;

}

int index(std::vector<char> data, char character, int skip_int) {

  int interval = 0;

  for (int i = 0; i < data.size(); i++) {

    if (data[i] == character) {

      if (interval == skip_int) {

        return i;

      } else {

        interval++;

      }
    }
  }

  return -1;

}

int index(std::vector<int> data, int character, int skip_int) {

  int interval = 0;

  for (int i = 0; i < data.size(); i++) {

    if (data[i] == character) {

      if (interval == skip_int) {

        return i;

      } else {

        interval++;

      }
    }
  }

  return -1;

}

// a simple coin flip
int coin_flip() {

  srand (time(NULL));

  int flip = rand() % 2;

  return flip;

}


void print(std::vector<int> data, bool new_line, bool no_seperator) {

  for (int i = 0; i < data.size(); i++) {

    if (new_line == true) {

      std::cout << str(data[i]) << "\n";

    } else {

      if (no_seperator == false) {

      std::cout << str(data[i]) << ", ";

    } else {

      std::cout << str(data[i]);

    }
   }
  }
}

void print(std::vector<std::string> data, bool new_line, bool no_seperator) {

  for (int i = 0; i < data.size(); i++) {

    if (new_line == true) {

      std::cout << data[i] << "\n";

    } else {

      if (no_seperator == false) {

      std::cout << data[i] << ", ";

    } else {

      std::cout << data[i];

     }
    }
  }
}

void print(std::vector<char> data, bool new_line, bool no_seperator) {

  for (int i = 0; i < data.size(); i++) {

    if (new_line == true) {

      std::cout << data[i] << "\n";

    } else {

      if (no_seperator == false) {

      std::cout << data[i] << ", ";

    } else {

      std::cout << data[i];

     }
    }
  }
}

void print(int data, bool new_line) {

  if (new_line == true) {

    std::cout << str(data) << "\n";

  } else {

    std::cout << str(data);

  }
}

void print(std::string data, bool new_line) {

  if (new_line == true) {

    std::cout << data << "\n";

  } else {

    std::cout << data;

  }
}

void print(char data, bool new_line) {

  if (new_line == true) {

    std::cout << data << "\n";

  } else {

    std::cout << data;

  }
}

void hide() {
  //Bad way to do this but hiding input is really complicated and im not trying to do all that.

  print("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

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
