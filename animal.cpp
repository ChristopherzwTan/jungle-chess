#include "animal.h"

using namespace std;

// Constructor
animal::animal(team_t team, animal_t name, int row, int column) {
  team_ = team;
  name_ = name;
  row_ = row;
  column_ = column;
}


// Destructor
animal::~animal()
{
}

// Accessors
team_t animal::getTeam() const {
  return team_;
}

animal_t animal::getName() const {
  return name_;
}
 
int animal::getRow() const {
  return row_;
}

int animal::getColumn() const {
  return column_;
}

// Muatators
void animal::setTeam(team_t team) {
  team_ = team; 
}

void animal::setName(animal_t name) {
  name_ = name;
}

void animal::setRow(int row) {
  row_ = row;
}

void animal::setColumn(int column) {
  column_ = column;
}

void animal::setLocation(int row, int column) {
  row_ = row;
  column_ = column;
}

