#include "TPPartie1.h"
#include <cstdlib>
#include <ctime>

using namespace std;

void ex2()
{
    char again = 'Y';

    while (again == 'y' || again == 'Y'){
    int de1 = 0, de2 = 0, de3 = 0;
    int gagne;
    int essai;
    gagne=0;
    essai=0;

    de1 = rand ()%6 + 1;
    de2 = rand ()%6 + 1;
    de3 = rand ()%6 + 1;

    do
    {
        srand(time(nullptr));
        if (! (de1==4  || de1==2 ||de1==1 && de1!=de2 && de1 != de3) ){
            de1 = rand ()%6 + 1;
        }
        if (! (de2==4  || de2==2 ||de2==1 && de2!=de1 && de2 != de3)){
            de2 = rand ()%6+ 1;
        }
        if ( !( de3==4  || de3==2 ||de3==1 && de3!=de2 && de3 != de1)){
            de3 = rand ()%6+ 1;
        }

        cout << "Lancer:\n";
        printf("[%d] [%d] [%d]",de1,de2,de3);

        getchar();
        if (de1 == 4)
        {
            if (de2 == 2)
            {
                if (de3 == 1)
                    gagne = 1;
                else
                    gagne = 0;
            }
            else
            {
                if (de2 == 1)
                {
                    if (de3 == 2)
                        gagne = 1;
                    else
                        gagne = 0;
                }
                else
                    gagne = 0;
            }
        }
        if (de2 == 4)
        {
            if (de1 == 2)
            {
                if (de3 == 1)
                    gagne = 1;
                else
                    gagne = 0;
            }
            else
            {
                if (de1 == 1)
                {
                    if (de3 == 2)
                        gagne = 1;
                    else
                        gagne = 0;
                }
                else
                    gagne = 0;
            }
        }
        if (de3 == 4)
        {
            if (de2 == 2)
            {
                if (de1 == 1)
                    gagne = 1;
                else
                    gagne = 0;
            }
            else
            {
                if (de2 == 1)
                {
                    if (de1 == 2)
                        gagne = 1;
                    else
                        gagne = 0;
                }
                else
                    gagne = 0;
            }
        }
        essai = essai + 1;
    }
    while ((!gagne) && (essai != 4));
    if (gagne)
        cout<<"\nGagne !!!!";
    else
        cout<<"\nPerdu...";
    getchar();
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


