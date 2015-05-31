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



