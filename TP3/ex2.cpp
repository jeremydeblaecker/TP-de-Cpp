#include "Carte2.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void ex2() {
    std::cout << "Jeu de carte (2): " << std::endl;
    Carte1 c1(PIQUE, AS);
    std::cout << c1 << std::endl;

    Carte1 c2(c1);
    std::cout << c2 << std::endl;
    c2.setType(TREFLE);
    c2.setValeur(DAME);
    std::cout << c2 << std::endl;

    if (c1 != c2) {
        std::cout << "It's ok :-)" << std::endl;
    }
    else {
        std::cerr << "Problem bug" << std::endl;
        std::cout << "\n";
        c1.afficher();
        c2.afficher();
    }
}
