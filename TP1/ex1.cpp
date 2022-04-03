#include <iostream>
#include <cstdlib>
#include <ctime>
#include "TPPartie1.h"

using namespace std;


void ex1()
{
    char again = 'Y';

    while (again == 'y' || again == 'Y'){
        int secret, reponse, essaie = 0;
        srand(time(0));
        const int maximum_number = 10;
        const int minimum_number = -10;
        secret = (rand() % (maximum_number + 1 - minimum_number)) + minimum_number;
        cout << "Solution : Le Nombre Mystere est " << secret <<" a vous de trouver le nombre\n";

        do
        {
            cout << "Le nombre a trouver est compris entre -10 et 10, entrer un nombre : ";
            cin >> reponse;
            essaie++;

            if (reponse > secret)
                cout << "Trop grand\n\n";
            else if (reponse < secret)
                cout << "Trop petit\n\n";
            else
                cout << "\nBravo! Le chiffre est bien "<< secret <<". Vous avez gagne en " << essaie << " coups!\n";
        } while (reponse != secret);
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
