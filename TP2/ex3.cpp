#include <iostream>
#include <memory>
#include <string>
#include "TPPartie2.h"

typedef std::shared_ptr<double> ptrStdDouble;

void constructeur(ptrStdDouble &dd,const unsigned & taille) {
    dd.reset(new double[taille]{0}, std::default_delete<double[]>());
}

void afficher (const ptrStdDouble& dd, const unsigned& taille) {
    if ( dd!= nullptr){
    for(unsigned i=0; i < taille; ++i)
            std::cout << "tab["<<i<<"]=" << dd.get()[i] << std::endl;
    }
}

void destructeur (ptrStdDouble& dd, unsigned& taille) {
    dd.reset();
    taille = 0;
}

void modifier (ptrStdDouble const & dd, const unsigned& taille, const unsigned& index, const double& valeur) {
    if (index >= taille) throw (std::string("Erreur 001"));
    dd.get()[index]=valeur;
}

const double& get(const ptrStdDouble& dd, const unsigned& taille, const unsigned& index) {
    return dd.get()[index];
}

double& get( ptrStdDouble& dd, const unsigned& taille, const unsigned& index) {
    return dd.get()[index];
}

void C_2_6c() {
    ptrStdDouble d1 = nullptr;
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

void ex3(){
    char again = 'Y';
    while (again == 'y' || again == 'Y'){

    C_2_6c();
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
