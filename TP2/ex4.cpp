#include <iostream>
#include "TPPartie2.h"

using namespace std;

#define max(a,b) ((a)>(b)?(a):(b))
#define debugging(a, b) (printf("Erreur ligne %d du fichier %s", a, b))
int int1;
int int2;
int vMacro2;

void macro1(){
    cout << "Entrer entier 1 : ";
    cin >> int1;
    cout << "Entrer entier 2 : ";
    cin >> int2;

    vMacro2 = max(int1, int2);

    cout << "Le maximum des deux valeurs est : " << vMacro2 << endl;

    if (!false) {
        debugging(__LINE__, __FILE__);
    }
}

void macro2(){

    cout << "Entrer entier 1 : ";
    cin >> int1;
    cout << "Entrer entier 2 : ";
    cin >> int2;

    vMacro2 = max(int1, int2);

    cout << "Le maximum des deux valeurs est : " << vMacro2;
}

void ex4() {
    char again = 'Y';

    while (again == 'y' || again == 'Y'){
    cout << "Choisir la macro 1 ou 2 : " << endl;
    char choix;
    cin >> choix;
    switch(choix){
        case '1':
            cout << "Macro 1 : \n";
            macro1();
            break;
        case '2':
            cout << "Macro 2 : \n";
            macro2();
            break;
    }
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

