#ifndef plante_H
#define plante_H

#include <string>

class plante{
  protected:
    int _soif;
    int _faim;
    int _maturiter;
    int _taille;
    std::string _nom;
  
  
  public:
  
    void virtual manger(int engrais);
    void virtual arroser(int eau);
    void virtual tailler();
    
    void afficher();
    
    plante(std::string name);
    
};

#endif