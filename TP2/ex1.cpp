#include <iostream>
#include <memory>
#include <string>
#include "TPPartie2.h"

void afficherPointeur(int *pointeur){
    std::cout << "Adresse du pointeur : " << &pointeur << std::endl;
    std::cout << "Valeur pointee : " << *pointeur << std::endl;
}

int* constructeurPointeur(int* pointeur, int valeur){
    pointeur = &valeur;
    std::cout << pointeur << ", " << valeur << std::endl;
    std::cout << *pointeur << std::endl;
    return pointeur;
}

void destructeurPointeur(int *pointeur){
    delete[] pointeur;
}

void ex1(){
    char again = 'Y';

    while (again == 'y' || again == 'Y'){

    int Canard(10);
    int &refCanard = Canard;
    int *pointeur(0), *pointeur2(0);

    constructeurPointeur(pointeur, Canard);
    std::cout << "Pointeur : " << std::endl;
    afficherPointeur(pointeur);

    constructeurPointeur(pointeur2, refCanard);
    std::cout << "Reference : " << std::endl;
    afficherPointeur(pointeur);

    destructeurPointeur(pointeur);
    destructeurPointeur(pointeur2);

    cout << "\nRecommencer le jeu ?(y/n)";
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
