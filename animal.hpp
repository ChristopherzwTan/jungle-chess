#include <string>

#ifndef ANIMAL_HPP_
#define ANIMAL_HPP_

using namespace std;

enum team_t{red, blue};

class animal {
  public:
    // Constructor
    animal(team_t, string, int);

    // Destructor
    ~animal();

    // Accessors
    team_t getTeam() const;
    string getName() const;
    int getPower() const;
    
    // Mutators
    void setTeam(team_t);
    void setName(string);
    void setPower(int);


  private:
    team_t team_;
    string name_;
    int power_;


};

#endif /* ANIMAL_HPP_ */

