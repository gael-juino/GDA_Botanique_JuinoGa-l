#include <iostream>
#include "plante.h"
#include "player.h"

int main()
{
    std::cout<< "Bonjour vous etes un(e) jeun(e) fermier(e) et vous devez vous occupez de vos plantes."<< std::endl;
    std::cout<< "Pour l'instant vous venez juste de commencer alors vous ne possedez que 2 types de plantes."<< std::endl;
    std::cout<< "vous allez devoir vous en occupez pour en avoir d'autre !"<< std::endl;
    std::cout<< "Toute les plante on besoin d'eau et de nourriture mais attention à ne pas trop les nourrirent"<<std::endl;
    std::cout<< "sinon elle peuvent etres abimer et meme mourrir."<<std::endl;
    
    std::cout<<std::endl;
    plante * marguerite = new plante("marguerite");
    marguerite->afficher();
    
    
    Player * myself = new Player("Gael");
    
    /*myself->nourrir(link);
    link->afficher();
    
    tournesol * pluto = new tournesol("Pluto");
    pluto->afficher();
    
    
    myself->nourrir(pluto);
    pluto->afficher();
    pluto->aboiement();
    
    link->miaulement();*/
}
    
