#include <iostream>
#include <cstdlib>
#include <ctime>
#include "TPPartie1.h"

using namespace std;

int k;
int n;

int fact(int nbrFact) {
    int fact = 1;
    int i;
    for (size_t i = 1; i <= nbrFact; i++)
    {
        fact *= i;
    }
    return fact;
}

void ex8()
{
    char again = 'Y';

    while (again == 'y' || again == 'Y'){
    cout << "maxfact de : ";
    cin >> k;

    // maxfact
    while (fact(n) <= k)
    {
        n++;
    }
    // maxfact
    cout <<  n - 1 << "! <= " << k <<endl;
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
