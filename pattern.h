#ifndef PATTERN_H_INCLUDED
#define PATTERN_H_INCLUDED

#include <iostream>
#include <string>
 using namespace std;


class Voiture
{
    public:

    Voiture(int roues, std::string couleur);


    Voiture (Voiture&)=delete;

    Voiture& operator=(const Voiture &)=delete;


static Voiture *get()
{
  if (!singleton)
   {
       singleton=new Voiture;
   }
   return singleton;
}

    void affiche(std::ostream &flux) const;


    private:
    int m_roues;
    std::string m_couleur;
    static Voiture *singleton;
     Voiture();
};

std::ostream& operator<<(std::ostream& flux, Voiture const& Voiture);

Voiture* Voiture::singleton=nullptr;;

#endif // PATTERN_H_INCLUDED
