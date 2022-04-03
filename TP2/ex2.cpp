#include <iostream>
#include <string>
#include "TPPartie2.h"

using ptrDouble = double* ;

void constructeur(ptrDouble &dd,const unsigned & taille) {
    dd = new double[taille]{0};
}

void afficher (const ptrDouble& dd, const unsigned& taille) {
    if ( dd!= nullptr){
    for(unsigned i=0; i < taille; ++i)
            std::cout << "tab["<<i<<"]=" << dd[i] << std::endl;
    }
}

void modifier (ptrDouble const & dd, const unsigned& taille, const unsigned& index, const double& valeur) {
    if (index >= taille) throw (std::string("Erreur 001"));
    dd[index]=valeur;
}

void destructeur (ptrDouble& dd, unsigned& taille) {
    delete [] dd;
    dd = nullptr;
    taille = 0;
}

const double& get(const ptrDouble& dd, const unsigned& taille, const unsigned& index) {
    return dd[index];
}

double& get(ptrDouble& dd, const unsigned& taille, const unsigned& index) {
    return dd[index];
}

void C_2_6b() {
    ptrDouble d1 = nullptr;
    unsigned t1=5;
    constructeur(d1,t1);
    afficher(d1,t1);
    modifier(d1,t1,2, 3.13589985);
    afficher(d1,t1);
    std::cout<< get(d1,t1,2) << std:: endl;
    get(d1,t1,2) = 62.1;
    std::cout<< get(d1,t1,2) << std:: endl;
    afficher(d1,t1);
    destructeur(d1,t1);
    std::cout << "Le pointeur d1 est libre" << std::endl;
    afficher(d1,t1);
}

void ex2(){
    char again = 'Y';

    while (again == 'y' || again == 'Y'){
    C_2_6b();

    cout << "Recommencer le jeu ?(y/n)";
    cin >> again;
    }
    cout << "Merci d'avoir joue! Voulez vous aller au menu principal?(y/n)";

    char menu;
    cin >> menu;
    switch(menu){
        case 'y': cout << "Menu : \n";
        main();
    }
}
