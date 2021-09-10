#include <iostream>
#include <vector>
 
int main() {
 
  // Whale, whale, whale.
  // What have we got here?

 std::string string = "turpentine and turtles";

 std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};

 std::vector<std::string> whale = {"a", "ee", "i", "o", "uu"};

 std::string result;

 for (int i = 0; i < string.size(); i++) {

   for (int y = 0; y < vowels.size(); y++) {

     if (string[i] == vowels[y]) {

       result += whale[y];
       
     }
   }
 }

std::cout << result;

}
