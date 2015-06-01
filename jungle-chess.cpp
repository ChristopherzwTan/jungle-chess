#include <iostream>
#include <stdio.h>
#include <string>
#include <ctype.h>
#include <vector>
#include "animal.h"
#include "square.h"

#define ROWS 9
#define COLUMNS 7

using namespace std;

// Function prototypes
void printBoard(land_t board[9][7]);
void initializePieces();

int main(int argc, char *argv[]) {

  //TODO: REPLACE ALL THE land_t enums with the square class or think about it
  // It's possible that animal coordinates are good enough
 
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

  // cout << alive[0].getName << endl;
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


void initializePieces() {

  vector<animal> alive;
  vector<animal> dead;

  animal redRat(red, rat, 6, 7);
  animal redCat(red, cat, 7, 1);
  animal redDog(red, dog, 7, 5);
  animal redWolf(red, wolf, 6, 2);
  animal redLeopard(red, leopard, 6, 4);
  animal redTiger(red, tiger, 8 , 0);
  animal redLion(red, lion, 8, 6);
  animal redElephant(red, elephant, 6, 0);

  animal blueRat(blue, rat, 2, 0);
  animal blueCat(blue, cat, 1, 5);
  animal blueDog(blue, dog, 1, 1);
  animal blueWolf(blue, wolf, 2, 4);
  animal blueLeopard(blue, leopard, 2, 2);
  animal blueTiger(blue, tiger, 0, 6);
  animal blueLion(blue, lion, 0, 0);
  animal blueElephant(blue, elephant, 2, 6);

  alive.push_back(redRat);
  alive.push_back(redCat);
  alive.push_back(redDog);
  alive.push_back(redWolf);
  alive.push_back(redLeopard);
  alive.push_back(redTiger);
  alive.push_back(redLion);
  alive.push_back(redElephant);

  alive.push_back(blueRat);
  alive.push_back(blueCat);
  alive.push_back(blueDog);
  alive.push_back(blueWolf);
  alive.push_back(blueLeopard);
  alive.push_back(blueTiger);
  alive.push_back(blueLion);
  alive.push_back(blueElephant);
}


