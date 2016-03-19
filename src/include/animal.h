#include <string>

#ifndef ANIMAL_H_
#define ANIMAL_H_

using namespace std;

enum team_t{red, blue};
enum animal_t{rat, cat, dog, wolf, leopard, tiger, lion, elephant};

class animal {
  public:
    // Constructor
    animal(team_t, animal_t, int, int);

    // Destructor
    ~animal();

    // Accessors
    team_t getTeam() const;
    animal_t getName() const;
    int getRow() const;
    int getColumn() const;
    
    // Mutators
    void setTeam(team_t);
    void setName(animal_t);
    void setRow(int);
    void setColumn(int);
    void setLocation(int, int);


  private:
    team_t team_;
    animal_t name_;
    int row_;
    int column_;

};

#endif /* ANIMAL_H_ */

