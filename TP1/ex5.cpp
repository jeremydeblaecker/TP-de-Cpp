#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
#include "TPPartie1.h"


using namespace std;
double a;
double b;
double p;
double u;
double rc;
double h;
double aire = 0;

void ex5()
{
    char again = 'Y';

    while (again == 'y' || again == 'Y'){
    cout << "Rentrer a : ";
    cin >> a;
    cout << "Rentrer b : ";
    cin >> b;
    cout << "Rentrer le pas : ";
    cin >> p;

    u =1;
    rc = 0;
    while (a < b)
    {
        h = pow(a, 2.0);
        aire = h * p;
        a = a + p;
        u += 1;
        rc = rc + aire;
        cout << "\nrectangle" << u << "=" << aire;
    }
    cout << "\nResultat : " << rc <<endl;
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

