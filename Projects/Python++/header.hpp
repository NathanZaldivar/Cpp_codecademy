// python++ template
#include <iostream>
#include <vector>

// Python++ functions
char input(std::string input_string, char type);
char lower(char character);

void hide();
//// print family
void print(std::vector<int> data, bool new_line = false, bool no_seperator = false);
void print(std::vector<std::string> data, bool new_line = false, bool no_seperator = false);
void print(std::vector<char> data, bool new_line = false, bool no_seperator = false);
void print(int data, bool new_line = true);
void print(std::string data, bool new_line = true);
void print(char data, bool new_line = true);
//// print family

//// index family
int index(std::string data, char character, int skip_int = 0);
int index(std::string data, int character_int, int skip_int = 0);
int index(std::string data, std::string character, int skip_int = 0);
int index(std::vector<std::string> data, char character, int skip_int = 0);
int index(std::vector<std::string> data, std::string character, int skip_int = 0);
int index(std::vector<char> data, char character, int skip_int = 0);
int index(std::vector<int> data, int character, int skip_int = 0);
//// index family
int intcur(std::string string_data, char character);
int input(std::string input_string, int type);
int coin_flip();

std::string input(std::string input_string, std::string type);
std::string str(int integer);
std::string replace_char(std::string selected_string, char character, int position);
std::string replace_all(std::string selected_string, char character, char selected_character);
std::string lower(std::string string);



// Main files functions
