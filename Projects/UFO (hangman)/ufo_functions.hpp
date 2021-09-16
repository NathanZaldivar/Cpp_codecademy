#include <iostream>
#include <vector>



// Simple print function
template <typename T>
void print(T string, bool new_line = true) {

  if (new_line == true) {

    std::cout << string << "\n";

  } else {

    std::cout << string;

  }
}

template <typename T>
void long_print(T string) {

  std::cout << "\n\n" << string << "\n\n";

}

template <typename T>
int index(T data, char character, int skip_int = 0) {

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

template <typename T>
int index(T data, int character, int skip_int = 0) {

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

char input(std::string input_string, char type);
char lower(char character);

void greet();
void display_misses(int misses);
void hide();

int intcur(std::string string_data, char character);
int input(std::string input_string, int type);

std::string codeword_ghost(std::string codeword);
std::string codeword_chooser();
std::string input(std::string input_string, std::string type);
std::string str(int integer);
std::string replace_char(std::string selected_string, char character, int position);
std::string replace_all(std::string selected_string, char character, char selected_character);
std::string answer_builder(std::string answer, std::string codeword, char choice);
std::string lower(std::string string);
