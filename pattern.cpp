#include "pattern.h"

using namespace std;


Voiture::Voiture(int roues,std::string couleur):m_roues(roues),m_couleur(couleur)
{

}


void Voiture::affiche(std::ostream &flux) const
{
    flux<<m_roues<<' '<<m_couleur;
}

std::ostream& operator<<(std::ostream& flux, Voiture const& Voiture)
{
    Voiture.affiche(flux);
    return flux;
}
