#pragma once
#ifndef DEF_CARTE
#define DEF_CARTE


#include <iostream>

enum Couleurs { PIQUE, COEUR, CARREAU, TREFLE };
enum Valeurs { AS, DEUX, TROIS, QUATRE, CINQ, SIX, SEPT, HUIT, NEUF, DIX, VALET, DAME, ROI};

struct Carte;

struct Carte {
    private :
        Couleurs couleur;
        Valeurs valeur;

    public :
        unsigned int NbCreation;

        Carte(Couleurs couleur, Valeurs valeur);

        ~Carte();

        void setType(Couleurs couleur) {
            this->couleur = couleur;
        }

        void setValeur(Valeurs valeur) {
            this->valeur = valeur;
        }

        void afficher() {
            std::cout << "Type: " << this->couleur << std::endl;
            std::cout << "Valeur: " << this->valeur << std::endl;
            std::cout << "\n";
        }

        bool equal(Carte& carte) {
            if (this->couleur == carte.couleur && this->valeur == carte.valeur) {
                return true;
            }
            else {
                return false;
            }
        }

        void affecter(Carte& carte) {
            this->couleur = carte.couleur;
            this->valeur = carte.valeur;
        }

        unsigned getNbCreation() {
            return this->NbCreation;
        }



};

Carte::Carte(Couleurs couleur, Valeurs valeur)
{
    this->couleur = couleur;
    this->valeur = valeur;
}

Carte:: ~Carte() {

}

#endif // !DEF_CARTE
