#include <string>

#ifndef ANIMAL_HPP_
#define ANIMAL_HPP_

class animal {
  private:
    int team;
    string name;
    int power;

  public:
    // Constructor
    animal();

    // Destructor
    ~animal();

    // Accessors
    int getTeam();
    int getPower();
    string getName();
    
    // Mutators
    void setTeam(int);
    void setName(string);
    void setPower(int);

};

#endif /* ANIMAL_HPP_ */

