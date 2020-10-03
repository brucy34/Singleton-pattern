#include "pattern.h"


Voiture::Voiture(int roues,std::string couleur):m_roues(roues),m_couleur(couleur)
{

}

std::ostream& operator<<(std::ostream& flux, Voiture const& Voiture)
{
    flux<<Voiture;
    return flux;
}
