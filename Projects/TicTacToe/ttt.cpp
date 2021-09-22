#include <iostream>
#include <vector>
#include "ttt.hpp"


int main() {

  // Format for grid:
  // 0 == 'o'
  // 1 == 'x'
  // 2 == ' '
  // Lines and underlines get autofilled as long as correct format is used.
  std::vector<int> grid_data = {2, 2, 2, 2, 2, 2, 2, 2, 2};

  bool endgame = false;

  hide(); // clearing the terminal

  greet();

  int turn = coin_flip();

  print("Player " + str(turn + 1) + " won the coin flip!");

  while (true) { // MAIN LOOP

    print(grid_builder(grid_data));

    int x = input("player " + str(turn + 1) + " X axis:", 0);
    int y = input("player " + str(turn + 1) + " y axis:", 0);

    grid_data = grid_update(grid_data, x, y, turn);

    int win = winner(grid_data);

    hide();

    switch (turn) {

      case 0:
        turn = 1;
        break;

      case 1:
        turn = 0;
        break;

    }

    switch (win) {

      case -1:
        continue;
        break;

      case 0:
        print("Player 1 won!");
        endgame = true;
        break;

      case 1:
        print("Player 2 won!");
        endgame = true;
        break;

    }

    if (endgame) {

      char choice = lower(input("Would you like to play again?[y or n] ", 'c'));

      if (choice == 'y') {
        // resetting game vars
        endgame = false;
        turn = coin_flip();
        grid_data = {2, 2, 2, 2, 2, 2, 2, 2, 2};

        print("Player " + str(turn + 1) + " won the coin flip!");
        continue;
      }

      print("Thank you for playing!");
      break;

    }
  }
}
