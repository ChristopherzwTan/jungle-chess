#include "square.h"

// Constructor
square::square(land_t type, bool occupied) {
  type_ = type;
  occupied_ = occupied;
}

// Destructor

// Accessors
land_t square::getType() const {
  return type_;
}

bool square::getOccupancy() const {
  return occupied_;
}


// Mutators
void square::setLand(land_t type) {
  type_ = type;
}

void square::setOccupancy(bool occupied) {
  occupied_ = occupied;
}


