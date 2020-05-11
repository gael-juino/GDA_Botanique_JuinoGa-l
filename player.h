#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "plante.h"

class Player{
  private:
    std::string _playerName;
  
  public:
  
    void nourrir(plante * cible);
    void irriguer(plante * cible);
    void tailler(plante * cible);
    
    
    Player(std::string nomPlayer);
    
};

#endif