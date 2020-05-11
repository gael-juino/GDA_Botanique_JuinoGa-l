#ifndef PLAYER_CPP
#define PLAYER_CPP

#include <string>
#include "player.h"
#include "plante.h"

// std::string _playerName;
  
  
    
    void Player::nourrir(plante * cible){
        cible->manger(20);
    }
    
    void Player::irriguer(plante * cible){
        cible->arroser(100); 
    }
    
    void Player::tailler(plante * cible){
        cible->arroser(-100); 
    }
    
    Player::Player(std::string nomPlayer): _playerName(nomPlayer) {}
    
#endif