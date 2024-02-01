//Personnage.cpp //on code les fonction là
#include "Personnage.h"
using namespace std;

Personnage::Personnage() //codage du constructeur
{
    int m_vie = 100;
    int m_magie = 100;
    std::string nomArme = "extension du territoire";
    int degatArme = 50;
}

Personnage::Personnage(string nomArme, int degatsArme)
{
 
}
Personnage::~Personnage()
{
    
}
void Personnage::recevoirDegats (int nbDegats)
{
    
}
void Personnage::attaquer (Personnage &cible)
{
    
}
void Personnage::boirePotionDeVie(int quantitePotion)
{
    
}
void Personnage::changerArme(std::string nomNouvelleArme, int degatsNouvelleArme)
{
    
}
bool Personnage:: estVivant() const
{
    if (m_vie > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void Personnage::attaqueMagique(std::string nomDuSort, int nbDegatsMagique)
{
    
}


