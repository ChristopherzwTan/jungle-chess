
#ifndef SQUARE_HPP_
#define SQUARE_HPP_

enum land_t{ground, water, trap, den};

class square {
  private:
    land_t type;

  public:
    // Constructor
    square(land_t);

    // Accessor
    land_t getLand();

    //TODO: Might get rid of this
    // Mutator
    void setLand(land_t);
};

#endif /* SQUARE_HPP_ */
