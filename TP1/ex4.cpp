#include <iostream>
#include "TPPartie1.h"

using namespace std;

void ex4()
{
    char again = 'Y';

    while (again == 'y' || again == 'Y'){
    // Saisie du terme initial
    int u0 = 0;
    while (!(u0 > 0))
    {
        cout << "N = ";
        cin >> u0;
    }
    //Calcul des termes
    int un = u0;
    int nt = 0;
    int tmax = u0;
        while (un != 1)
        {
            // Affichage du terme courant
            cout << un <<" ";
            // 1 terme en plus
            ++nt;
            // Actualisation du plus grand terme
            if (tmax < un)
            {
                tmax = un;
            }
        // Calcul du terme suivant
        un = (un % 2 == 0 ? un / 2 : 3 * un + 1);
        }
    // Affichage du Dernier terme
    cout << un;
    // 1 terme en plus
    ++nt;
    cout<<" ==> "<< nt <<" termes"<<endl;
    cout<<" ==> Plus grand termes : "<< tmax << endl;
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

