#ifndef rose_H
#define rose_H

#include <string>
#include "plante.h"

class rose : public plante {

  
  public:
  
    void manger(int engrais);
    void arroser(int eau);
    void tailler();

    
    void afficher();
    
    rose(std::string name);
    
};

#endif