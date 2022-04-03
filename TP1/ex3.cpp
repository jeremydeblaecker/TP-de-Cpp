#include "TPPartie1.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void ex3()
{
    char numJoueur1 = '1';
    char numJoueur2 = '2';
    char joueurActuel;
    int point1, point2 ;
    int partie, allumettes, totalAllumettes ;

    cout << "Jeu des alumettes\n" ;

    //Choisir le joueur qui commence
    do
        {
        cout << "Veuillez entrer le numero du joueur qui commence (1 ou 2): " << endl;
        cin >> joueurActuel ;
        }
    while (joueurActuel != numJoueur1 && joueurActuel != numJoueur2);

    // initialisation du nombre de parties et des compteurs des points
    partie = 0 ;
    point1 = 15 ;
    point2 = 15 ;

    do
        {
        cout <<  "Nouvelle partie" <<endl;
        do
            {
            cout << "Selectionner le nbr total d'alumettes : " <<endl;
            cin >> totalAllumettes ;
            }

        while (totalAllumettes < 1);
        while (totalAllumettes > 0){
            cout << "Il reste "<< totalAllumettes << " allumettes" << endl;
            cout << "Le Joueur " << joueurActuel << " joue." << endl;

            do
                {
                cout << "Combien d'allumettes voulez-vous retirer : " << endl;
                cin >> allumettes ;
                }
            while (allumettes < 1 || allumettes >= 4 || allumettes > totalAllumettes) ;

            totalAllumettes -= allumettes ;

            if (joueurActuel == numJoueur1)
                joueurActuel = numJoueur2 ;
            else
                joueurActuel = numJoueur1 ;
            }


            partie +=1 ;

            if (joueurActuel ==numJoueur1)
                {
                cout << numJoueur2 <<" a perdu !" << endl;
                point2 -=1 ;
                joueurActuel = numJoueur2 ;
                }
            else
                {
                cout << numJoueur1 <<" a perdu !"<< endl ;
                point1 -=1 ;
                joueurActuel = numJoueur1 ;
                }
        }
    while (point1 != 0 || point2 != 0 || partie != 25) ;

    if (point1 > point2)
        cout <<numJoueur1 <<"gagne le jeu !" ;
    else
        cout <<numJoueur2 <<"gagne le jeu !" ;
    getchar();

    }

