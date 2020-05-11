#ifndef plante_CPP
#define plante_CPP

#include <iostream>
#include "plante.h"

/*    int _maturité; int _soif; int _faim; std::string _nom; */
  

    
    void plante::manger(int engrais){    }
    
    void plante::arroser(int eau){    }
    
    void plante::tailler(){    }
    
    void plante::afficher(){
        std::cout << _nom << " est une plante, a une faim de " 
                << _faim << "/100, a soif de "
                << _soif << "/100, a une maturiter " 
                << _maturiter<< "/100 et a une pousse de"
                << _taille << "/100." << std::endl;
    }
    
    plante::plante(std::string name) : _nom(name), _maturiter(0), _soif(50), _taille(0), _faim(0)  {}

#endif