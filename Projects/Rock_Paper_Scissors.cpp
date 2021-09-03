#include <iostream>
#include <stdlib.h>

int main() {

  srand (time(NULL));
 
  int computer = rand() % 3 + 1;
 
  int user = 0;

  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";
 
  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";
 
  std::cout << "shoot!\n\n" << "$: ";  

  std::cin >> user;

  if (-user + computer == 2 || -user + computer == -1){
    std::cout << "You won!\n";
  } else if (-user + computer == 0) {
    std::cout << "Its a tie!\n";
  } else {
    std::cout << "You lost!\n";
  }
  
  switch (computer) {
    
    case 1:
      std::cout << "Computer chose rock!\n";
      break;
    case 2:
      std::cout << "Computer chose paper!\n";
      break;
    case 3:
      std::cout << "Computer chose scissors!\n";
      break;
    default:
      std::cout << "ERROR CHOICE";
      break;

  }

  return 0;
}
