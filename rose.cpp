#ifndef rose_CPP
#define rose_CPP

#include <iostream>
#include "rose.h"
#include "plante.h"

/*    int _ennui; int _fatigue; int _faim; std::string _nom; */
  
    
    void rose::manger(int engrais){
    }
    
    void rose::arroser(int eau){
    }
    
    void rose::tailler(){    
    }
    
    
    void rose::afficher(){
        std::cout << _nom << " est un rose, a une faim de " 
                << _faim << "/100, une soif de "
                << _soif<< "/100, et un maturiter de " 
                << _maturiter<< "/100 et a une pousse de"
                << _taille << "/100." << std::endl;
    }
    
    
    rose::rose(std::string name) : plante(name) {}

#endif