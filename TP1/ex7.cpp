#include <iostream>
#include <math.h>
#include <iomanip>
#include <conio.h>
#include "TPPartie1.h"

using namespace std;
int factori(int nFact) {
    int fact = 1;
    int i;
    for (size_t i = 1; i <= nFact; i++)
    {
        fact *= i;
    }
    return fact;
}

void ex7()
{
 char choix = 'e';
 double operand;
 char again = 'Y';

    while (again == 'y' || again == 'Y'){
    cout << "Voulez vous calculer la fonction exponentiel(e), sinus(x)(s), cosinus(x)(c), tan(t)?"<<endl;;
    cin >> choix;
    switch(choix){
        case 'e': cout << "Fonction e(x) :  "<<endl;
            cout << "Entrer l'exponentielle que vous voulez calculer : " <<endl;
            cin >> operand;
            getchar();
            cout << "L'exponentielle de "<< operand << " est "<< exp(operand)<< endl;
            break;

        case 's': cout << "Fonction sin(x) : " <<endl;
            int i, n;
            float xs, sum, t;
            cout<<"Entrer la valeur de x : "<< endl;
            cin>>xs;
            cout<<"Entrer la valeur de n : "<< endl;
            cin>>n;

            xs=xs*3.14159/180;
            t=xs;
            sum=xs;

            for(i=1;i<=n;i++)
            {
                t=(t*(-1)*xs*xs)/(2*i*(2*i+1));
                sum=sum+t;
            }

            cout<<"La valeur de sin ("<<xs<<") = "<<sum<< endl;;
            getch();
            cout<<"Verification: "<<sin(xs)<<endl;
            break;

        case 'c': cout << "Fonction cos(x) : " <<endl;
            cout << "Entrer le cosinus que vous voulez calculer :" << endl;
            cin >> operand;
            getchar();
            cout << "Le cosinus de "<< operand << " est "<< cos(operand)<< endl;
            break;
        case 't': cout << "Fonction tan(x) : " <<endl;
            cout << "Entrer la tangante que vous voulez calculer :" << endl;
            double result;
            double x;
            cin >> x;
            result = x + ((pow(x, 3.0)) / 3) + ((2 / 15) * (pow(x, 5.0)));
            getchar();
            cout << "La tan de "<< x << " est "<< result<< " (Verification =)"<<tan(x)<<endl;
            break;
    }
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
