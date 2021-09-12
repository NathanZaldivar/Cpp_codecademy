#include <iostream>
#include <vector>



// Simple print functions
template <typename T>
void print(T string, bool new_line = true) {

  if (new_line == true) {

    std::cout << string << "\n";

  } else {

    std::cout << string;

  }
}


void greet();
void display_misses(int misses);
int index(std::string data, char character);
std::string input_str(std::string input_string);
char input_char(std::string input_string);
std::string replace_char(std::string selected_string, char character, std::vector position);
