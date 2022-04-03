#include <iostream>
#include <cstdlib>
#include <ctime>
#include "TPPartie1.h"

using namespace std;

int fib(int n)
{
    if (n <= 1)
    return n;
    return fib(n-1) + fib(n-2);
}

void ex6()
{
    char again = 'Y';

    while (again == 'y' || again == 'Y'){
    int n = 0;

    cout << "Chosir un nombre a calculer avec la suite de Fibonacci : "<<endl;
    cin >> n;
    cout << "Resultat = "<< fib(n) <<endl;
    getchar();
    cout << "Recommencer le jeu ?(y/n)";
    cin >> again;
    }
    cout << "Merci d'avoir joue! Voulez vous aller au menu principal?(y/n)"<<endl;

    char menu;
    cin >> menu;
    switch(menu){
        case 'y': cout << "Menu : " <<endl;
        main();
    }
}

