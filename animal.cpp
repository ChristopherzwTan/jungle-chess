#include "animal.hpp"


// Constructor
animal::animal(team_t team, string name, int power) {
  team_ = team;
  name_ = name;
  power_ = power;
}


// Destructor
animal::~animal()
{
}

// Accessors
team_t getTeam() const {
  return team_;
}

string getName() const {
  return name_;
}
 
int getPower() const {
  return power_;
}
    
int getRow() const {
  return row_;
}

int getColumn() const {
  return column_;
}

// Muatators
void setTeam(team_t team) {
  team_ = team; 
}

void setName(string name) {
  name_ = name;
}

void setPower(int power) {
  power_ = power;
}

void setRow(int row) {
  row_ = row;
}

void setColumn(int column) {
  column_ = column;
}

void setLocation(int row, int column) {
  row_ = row;
  column_ = column;
}

