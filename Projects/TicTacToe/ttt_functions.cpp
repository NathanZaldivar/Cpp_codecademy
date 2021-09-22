#include <iostream>
#include <vector>
#include "ttt.hpp"





// TO DO:
// start up the while loop in main()
// figure out a turn system in main() while loop
// implement replay






void greet() {

  print("Welcome to nathan zaldivars TicTacToe game!");
  print("Player 1 is X and Player 2 is O");
  print("a coin flip will decide who goes first...");

}



// Converts data vector into correct formats to search colums, rows, and diagonal win
// Function check PASSED : winner(grid_data) == 0(player 1 win) || 1(player 2 win) || -1(no win)
int winner(std::vector<int> data) {

  std::vector<int> diagonal_data = diagonal_convert(data); // data for diagonal wins
  std::vector<int> column_data = column_convert(data); // data for column wins
  std::vector<int> row_data = data; // data for row wins, data is allready in a row format for win_search()

  int diagonal_results = win_search(diagonal_data);
  int column_results = win_search(column_data);
  int row_results = win_search(row_data);

  if (diagonal_results == 1 || column_results == 1 || row_results == 1) {

    return 1; // X win

  } else if (diagonal_results == 0 || column_results == 0 || row_results == 0) {

    return 0; // O win

  } else {

    return -1; // No winner

  }
}





// Converts data vector into a vector that check_winner() can use to check for diagonal wins
// Function check PASSED : example not needed
std::vector<int> diagonal_convert(std::vector<int> data) {

  std::vector<int> format = {0, 4, 8, 2, 4, 6};
  std::vector<int> results;

  for (int i = 0; i < format.size(); i++) {

    results.push_back(data[format[i]]);

  }

  return results;

}



// Converts data vector into a vector that check_winner() can use to check for column wins
// Function check PASSED : example not needed
std::vector<int> column_convert(std::vector<int> data) {

  std::vector<int> format = {0, 3, 6, 1, 4, 7, 2, 5, 8};
  std::vector<int> results;

  for (int i = 0; i < format.size(); i++) {

    results.push_back(data[format[i]]);

  }

  return results;

}


// updates the data vector with players input
// Function check PASSED :
//
// test1 = intdate(test1, 2, 0, 1);
// print(grid_builder(test1));
// OUTPUT //
// Y:
//[0]  | |x
//    _____
//[1]  | |
//    _____
//[2]  | |
//X:[0][1][2]
std::vector<int> grid_update(std::vector<int> data, int column, int row, int turn) {

  std::vector<int> results = data;

  int index = row * 3 + column;

  if (results[index] != 2) {

    return results;

  }

  results[index] = turn;

  return results;

}

// Checks for any winning combo
// Vector has to be pre formated for win_search() to work, see winner()
// Function check PASSED : check_rows(data) == 0('o') || 1('x') || -1(No winner was found)
int win_search(std::vector<int> data) {

  int tick;
  int turn;

  for (int i = 0; i < data.size(); i++) {

    if (data[i] == 2) {

      tick = 0;
      continue;

    }

    if (data[i] != turn) {

      turn = data[i];
      tick = 1;

    } else {

      tick += 1;

    }

    if (tick == 3) {

      return turn;

    }

    if ((i + 1) % 3 == 0) { // Checks if interval is at the end of a segment

      tick = 0;

    }

    //DUBUG
    //print("tick:");
    //print(tick);
    //print("Turn:");
    //print(turn);
    //print("interval:");
    //print(i);
  }

  return -1; // Return negative int if no winning segment was found

}



// Builds a string representation of the Tic Tack Toe grid
// Function check PASSED : grid_builder(data_vector) == x|o|x
//                                                      _____
//                                                      o|x|o
//                                                      _____
//                                                      x|o|x
std::string grid_builder(std::vector<int> data) {

  std::string results;

  results += " Y:\n";

  for (int i = 0; i < data.size(); i++) {

    switch (i) {

      case 0:
        results += "[0] ";
        break;

      case 3:
        results += "[1] ";
        break;

      case 6:
        results += "[2] ";
        break;

    }

    switch (data[i]) {

      case 0:
        results += 'o';
        break;

      case 1:
        results += 'x';
        break;

      case 2:
        results += ' ';
        break;

    }

    if ((i + 1) % 3 == 0 && i < 6) { // Translation: if interval is at the end of the row and its not on the last row then add the seperator

      results += "\n    _____\n";

    } else if ((i + 1) % 3 != 0) {

      results += '|';

    }
  }

  results += "\nX:[0][1][2]";

  return results;

}
