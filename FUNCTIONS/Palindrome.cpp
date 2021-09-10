#include <iostream>

// Define is_palindrome() here:
std::string reverse(std::string text) {

  std::string reversed;

  for (int i = 0; i < text.size(); i++) {

    reversed += text[-i + (text.size() - 1)];
    
  }

  return reversed;

}

bool is_palindrome(std::string text) {

  if (text == reverse(text)) {

    return true;

  } else {

    return false;

  }
}

int main() {
  
  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";
  
}
