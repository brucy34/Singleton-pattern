#ifndef PATTERN_H_INCLUDED
#define PATTERN_H_INCLUDED

#include <iostream>
#include <string>
 using namespace std;


class Voiture
{
    public:
    Voiture();
    Voiture(int roues, std::string couleur);

    Voiture (Voiture &other)=delete;

    void operator=(const Voiture &)=delete;

    static Voiture *GetInstance();

    void affiche(std::ostream &flux) const;


    private:
    int m_roues;
    std::string m_couleur;
    static Voiture *singleton;
};

std::ostream& operator<<(std::ostream& flux, Voiture const& Voiture);

Voiture* Voiture::singleton=nullptr;;

#endif // PATTERN_H_INCLUDED
