#pragma once
#ifndef DEF_CARTE2
#define DEF_CARTE2


#include <iostream>
using namespace std;

enum Couleurs { PIQUE, COEUR, CARREAU, TREFLE };
enum Valeurs { AS, DEUX, TROIS, QUATRE, CINQ, SIX, SEPT, HUIT, NEUF, DIX, VALET, DAME, ROI };

struct Carte1;


struct Carte1 {
private:
    Couleurs couleur;
    Valeurs valeur;

public:
    unsigned int NbCreation = 0;

    Carte1(Couleurs couleur, Valeurs valeur);

    ~Carte1();

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

    bool equal(Carte1& carte) {
        if (this->couleur == carte.couleur && this->valeur == carte.valeur) {
            return true;
        }
        else {
            return false;
        }
    }

    void affecter(Carte1& carte) {
        this->couleur = carte.couleur;
        this->valeur = carte.valeur;
    }

    //Opérateurs Exercice 2
    bool operator =(Carte1& carte) {
        this->couleur = carte.couleur;
        this->valeur = carte.valeur;
    }

    bool operator ==(Carte1& carte) {
        if (this->couleur == carte.couleur && this->valeur == carte.valeur) {
            return true;
        }
        else {
            return false;
        }
    }

    bool operator !=(Carte1& carte) {
        if (this->couleur != carte.couleur || this->valeur != carte.valeur) {
            return true;
        }
        else {
            return false;
        }
    }

    //Fonction Exercice 2
    unsigned getNbCreation() {
        return this->NbCreation;
    }

    friend ostream& operator<<(ostream& os, const Carte1& carte);
};

Carte1::Carte1(Couleurs couleur, Valeurs valeur)
{
    this->couleur = couleur;
    this->valeur = valeur;
}

Carte1:: ~Carte1() {

}

ostream& operator<<(ostream& os, const Carte1& carte)
{
    os << carte.couleur << '/' << carte.valeur;
    return os;
}


#endif // !DEF_CARTE
