#include <iostream>
#include <memory>
#include <string>
#include "TPPartie2.h"

using namespace std;

enum Sexe { INCONNUE = 0, MASCULIN = 1, FEMININ = 2 };

istream& operator>> (istream& in, Sexe& x)
{
    int val;

    if (in >> val) {
        switch (val) {
        case INCONNUE: case MASCULIN: case FEMININ:
            x = Sexe(val); break;
        default:
            throw out_of_range("Valeur invalide pour la valeur SEXE");
        }
    }

    return in;
}

int nbPersonne, i;

struct personne {
    int numero;
    std::string nom;
    Sexe sexe;
};

void ex5() {
    char again = 'Y';

    while (again == 'y' || again == 'Y'){
    struct personne* ptrPersonne;
    int i = 0;
    int n = 0;

    cout << "Entrer le nombre de canards : "; /*J'ai change la personne par un canard*/
    cin >> n;

    ptrPersonne = new personne[n];

    for (i = 0; i < n; ++i)
    {
        cout << "Entrer le numero : ";
        cin >> ptrPersonne[i].numero;
        cout << "Entrer le nom : ";
        cin >> ptrPersonne[i].nom;
        cout << "Entrer le sexe (INCONNUE = 0, MASCULIN = 1, FEMININ = 2) : \n";
        cin >> ptrPersonne[i].sexe;
        cout << " \n" << endl;
    }
    cout << "Afficher :\n";
    for (i = 0; i < n; i++)
    {
        cout << "Numero : " << ptrPersonne[i].numero << "\n" << std::endl;
        cout << "Nom : " << ptrPersonne[i].nom << "\n" << std::endl;
        cout << "Sexe : " << ptrPersonne[i].sexe << "\n\n" << std::endl;
    }
    delete[] ptrPersonne;

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
