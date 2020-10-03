#ifndef PATTERN_H_INCLUDED
#define PATTERN_H_INCLUDED

#include <iostream>
#include <string>
class Voiture
{
    public:
    Voiture();
    Voiture(int roues, std::string couleur);

    void affiche(std::ostream &flux) const;


    private:
    int m_roues;
    std::string m_couleur;
};

std::ostream& operator<<(std::ostream& flux, Voiture const& Voiture);

#endif // PATTERN_H_INCLUDED
