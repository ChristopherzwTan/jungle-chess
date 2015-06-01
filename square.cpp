#include "square.hpp"

// Constructor
square::square(land_t type, bool occupied) {
  type_ = type;
  occupied_ = occupied;
}

// Destructor

// Accessors
land_t getType() const {
  return type_;
}

bool getOccupancy() const {
  return occupied_;
}


// Mutators
void setLand(land_t type) {
  type_ = type;
}

void setOccupancy(bool occupied) {
  occupied_ = occupied;
}


