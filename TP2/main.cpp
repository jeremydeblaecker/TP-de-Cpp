#include "TPPartie2.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    char choice;
    cout << "Choisir un exercice de 1 a 5? \n(1)Reference/Pointeur \n(2)Reference/Pointeur : Corriger et Completer\n(3)Reference/Pointeur intelligent Reference/Pointeur :Corriger et Compléter \n(4)Macro \n(5)Personne"<< endl;
    cin >> choice;
    switch(choice)
    {
        case '1': cout << "Exercice 1:Reference/Pointeur\n";
        ex1();
        return 0;

        case '2': cout << "Exercice 2:Reference/Pointeur : Corriger et Compléter\n";
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
    }

}

