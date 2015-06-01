
#ifndef SQUARE_HPP_
#define SQUARE_HPP_

enum land_t{
  ground, 
  water, 
  trap, 
  redden,
  blueden
};

class square {
  public:
    // Constructor
    square(land_t, bool);

    // Accessor
    land_t getLand() const;
    bool getOccupancy() const;

    //TODO: Might get rid of this
    // Mutator
    void setLand(land_t);
    void setOccupancy(bool);

  private:
    land_t type_;
    bool occupied_;
};

#endif /* SQUARE_HPP_ */
