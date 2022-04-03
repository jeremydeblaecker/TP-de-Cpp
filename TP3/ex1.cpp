#include <iostream>
#include "Carte.h"

using namespace std;

void ex1()
{
std::cout << "Jeu de carte (1): " << std::endl;
    Carte c1 (PIQUE, AS);
    c1.afficher();
    Carte c2 (c1);
    c2.afficher();
    c2.setType(TREFLE);
    c2.setValeur(DAME);
    c2.afficher();
    Carte c3(PIQUE, DEUX);
    c2.affecter(c3);
    c2.afficher();
    c3.afficher();

    if (c1.equal(c2)) {
        std::cout << "It's ok :-)" << std::endl;
    }
    else {
        std::cerr << "Problem bug" << std::endl;
        std::cout << "\n";
        c1.afficher();
        c2.afficher();
    }
}

