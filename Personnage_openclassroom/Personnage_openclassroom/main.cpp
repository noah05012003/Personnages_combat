#include <iostream>  // les actions 
#include <string>
#include "Personnage.h"
using namespace std;

int main()
{
    Personnage Sukuna, Gojo;  //création de 2 persos
    Sukuna.attaquer(Gojo);
    Gojo.recevoirDegats(50);
    Gojo.boirePotionDeVie(50);
    Sukuna.attaqueMagique("découpe", 90);
}


