//Personnage.h //on initialise les fonctions ici
#ifndef Personnage_h
#define Personnage_h
#endif /* Personnage_h */
#include <string>


class Personnage
{
public: //l'attribut ou la méthode peut être appelé depuis l'extérieur de l'objet
        //méthodes
    Personnage(); //constructeur
    Personnage(std::string m_nomArme, int m_degatsArme); //pour creer un persos avec d'autre at
    ~Personnage();
    void recevoirDegats (int nbDegats);
    void attaquer (Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    bool estVivant() const;
    void attaqueMagique(std::string nomDuSort, int nbDegatsMagique);
    
private: // l'attribut ou la méthode ne peut pas être appelé depuis l'extérieur de l'objet
         //inclure des attributs
    int m_vie;
    int m_magie;
    std::string nomArme;
    int degatsArme;
};
