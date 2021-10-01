// python++ template
#include <iostream>
#include <vector>





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

// Python++ functions
char input(std::string input_string, char type);
char lower(char character);

void hide();
void print(std::vector<int> data, bool new_line = false, bool no_seperator = false);
void print(std::vector<std::string> data, bool new_line = false, bool no_seperator = false);
void print(std::vector<char> data, bool new_line = false, bool no_seperator = false);
void print(int data, bool new_line = true);
void print(std::string data, bool new_line = true);
void print(char data, bool new_line = true);

int intcur(std::string string_data, char character);
int input(std::string input_string, int type);
int coin_flip();

std::string input(std::string input_string, std::string type);
std::string str(int integer);
std::string replace_char(std::string selected_string, char character, int position);
std::string replace_all(std::string selected_string, char character, char selected_character);
std::string lower(std::string string);



// Main files functions
