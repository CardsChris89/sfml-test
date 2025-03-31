#ifndef SFMLPROJECT_PLAYER_H
#define SFMLPROJECT_PLAYER_H
#include "weapon.h"
#include <vector>
using std::vector;

class Player {
public:
    Player();
private:
    vector<Weapon> weapons;

};


#endif
