#include <iostream>
#include <vector>
#include <stdlib.h>
#include "header.hpp" // default header file name





//// START OF INDEX FAMILY
//
// Function checks:
// index(string, char, int) : PASSED
// index(string, string, int) : PASSED
// index(vector<string>, string, int) : PASSED
// index(vector<char>, char, int) : PASSED
// index(vector<int>, int, int) : PASSED
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
// Similar to pythons index() where index() will return the first index of the character in the data.
int index(std::string data, std::string character, int skip_int) {

  int interval = 0;
  int size = 0;

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
//// END OF INDEX FAMILY

//// START OF PRINT FAMILY
//
// Function check:
// print(vector<int>, bool, bool) : PASSED
// print(vector<string>, bool, bool) : PASSED
// print(vector<char>, bool, bool) : PASSED
// print(int, bool) : PASSED
// print(string, bool) : PASSED
// print(char, bool) : PASSED
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
//// END OF PRINT FAMILY

// Function check:
// hide() : PASSED (No example needed)
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
//// START OF REPLACE FAMILY
//
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

std::string replace_all(std::string selected_string, std::string character, std::string selected_character) {
 
 int ocur = intcur(selected_string, character);
 int index_interval = 0;
 std::vector<int> index_list;
 std::string results;

 for (int i = 0; i < ocur; i++) {

  index_list.push_back(index(selected_string, character, i));
 
 }

 for (int i = 0; i < selected_string.size(); i++) {

  if (i == index_list[index_interval]) {
   
   results += selected_character;
   i += character.size() - 1;

   if (index_interval < index_list.size()) {

    index_interval++;

   }
  } else {
   
    results += selected_string[i];
 
  }
 }

 return results;

}
//// END OF REPLACE FAMILY

//// START OF INPUT FAMILY
//
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
//// END OF INPUT FAMILY

//// START OF INTCUR FAMILY
//
// Finds all occurences
// TESTS:
// Function check PASSED : intcur("hello", 'l') == 2
int intcur(std::string data, char character) {

  int results = 0;

  for (int i = 0; i < data.size(); i++) {

    if (data[i] == character) {

      results++;

    }
  }

  return results;

}

// Strings index reused and repurposed for intcur
int intcur(std::string data, std::string character) {

  int size = 0;
  int results = 0;

  for (int i = 0; i < data.size(); i++) {

    if (data[i] == character[size]) {
      
      size++;

    } else {
      
      size = 0;
      continue;
      
    }
     
    if (size == character.size()) {
       
      results++;
      size = 0;
       
    }
 }
 

 return results;

}
//// END OF INTCUR FAMILY

//// MISC
// Function check PASSED : str(2) == "2"
// Function check PASSED : coin_flip() == 1 | 0
std::string str(int integer) {

  std::string results = std::to_string(integer);

  return results;


}

int coin_flip() {

  srand (time(NULL));

  int flip = rand() % 2;

  return flip;

}



//// MISC
