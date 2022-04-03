#include "TPPartie1.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    char choice;
    cout << "Choisir un exercice de 1 a 8? \n(1)Nbr mystere \n(2)421 \n(3)Jeu des allumettes \n(4)Syracuse \n(5)Integrale \n(6)Fibonacci \n(7)Developpements limites \n(8)Maxfact"<< endl;
    cin >> choice;
    switch(choice)
    {
        case '1': cout << "Exercice 1\n";
        ex1();
        return 0;

        case '2': cout << "Exercice 2\n";
        ex2();
        return 0;

        case '3': cout << "Exercice 3\n";
        ex3();
        return 0;

        case '4': cout << "Exercice 4\n";
        ex4();
        return 0;

        case '5': cout << "Exercice 5\n";
        ex5();
        return 0;

        case '6': cout << "Exercice 6\n";
        ex6();
        return 0;

        case '7': cout << "Exercice 7\n";
        ex7();
        return 0;

        case '8': cout << "Exercice 8\n";
        ex8();
        return 0;
    }

}
