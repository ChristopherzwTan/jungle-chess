
#ifndef SQUARE_HPP_
#define SQUARE_HPP_

enum land_t{ground, water, trap, den};

class square {
  public:
    // Constructor
    square(land_t);

    // Accessor
    land_t getLand() const;

    //TODO: Might get rid of this
    // Mutator
    void setLand(land_t);

  private:
    land_t type_;
};

#endif /* SQUARE_HPP_ */
