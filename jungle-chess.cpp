#include <iostream>
#include <stdio.h>
#include <string>
#include <ctype.h>
#include "animal.hpp"
//#include "square.hpp"

#define ROWS 9
#define COLUMNS 7

// Enums for the board
enum land_t {
  ground, 
  water, 
  trap, 
  redden, 
  blueden 
};


// Function prototypes
void printBoard(land_t board[9][7]);

int main(int argc, char *argv[]) {

  // Initialize the board
  land_t board[ROWS][COLUMNS] = {
    {ground, ground, trap, blueden, trap, ground, ground},
    {ground, ground, ground, trap, ground, ground, ground},
    {ground, ground, ground, ground, ground, ground, ground},
    {ground, water, water, ground, water, water, ground},
    {ground, water, water, ground, water, water, ground},
    {ground, water, water, ground, water, water, ground},
    {ground, ground, ground, ground, ground, ground, ground},
    {ground, ground, ground, trap, ground, ground, ground},
    {ground, ground, trap, redden, trap, ground, ground}
  };

  printBoard(board);

  return 0;

}

void printBoard(land_t board[9][7]) {
  int i, j = 0;
  char square;

  for (i = 0; i < ROWS; i++) {
    for (j = 0; j < COLUMNS; j++) {
      switch(board[i][j]) {
        case ground:
          square = 'G';
          break;
        case water:
          square = 'W';
          break;
        case trap:
          square = 'T';
          break;
        case redden:
          square = 'R';
          break;
        case blueden:
          square = 'B';
          break;
      }

      cout << "|" << square << "|";
    } 
    cout << "\n---------------------\n";
  }
}
