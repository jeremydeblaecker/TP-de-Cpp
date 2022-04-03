#include "TPPartie3.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    char choice;
    cout << "Choisir un exercice de 1 a 8? \n(1)Jeu de carte (1) \n(2)Jeu de carte (2)\n(3)Jeu de carte YOGIOH (3.3) \n(4)Jeu de carte YOGIOH (3.4) \n(5)Jeu de carte YOGIOH (3.5) \n"<< endl;
    cin >> choice;
    switch(choice)
    {
        case '1': cout << "Exercice 1 : Jeu de carte (1)\n";
        ex1();
        return 0;

        case '2': cout << "Exercice 2 : Jeu de carte (2)\n";
        ex2();
        return 0;
/*
        case '3': cout << "Exercice 3 : Jeu de carte YOGIOH (3.3)\n";
        ex3();
        return 0;

        case '4': cout << "Exercice 4 : Jeu de carte YOGIOH (3.4)\n";
        ex4();
        return 0;

        case '5': cout << "Exercice 5 : Jeu de carte YOGIOH (3.5)\n";
        ex5();
        return 0;*/
    }

}

