#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>
#include <random>
#include <ctime>
#include <stdlib.h>

using namespace std;

class Zombie
{

private:
	int pv = 100;
	string nom = "Thierry";
	int attack = 11;
	int defense = 0;

public:
    //CONSTRUCTEURS
    Zombie();
    Zombie(int p, int a, int d);
    Zombie(string n);


    //DESTRUCTEUR
    ~Zombie();

    //GETTER/SETTER PV
	int getPv() const;
	void setPv(int p);

    //GETTER/SETTER NOM
	string getNom() const;
	void setNom(string n);

    //GETTER/SETTER ATTACK
	int getAttack() const;
	void setAttack(int a);

    //GETTER/SETTER DEFENSE
	int getDefense() const;
	void setDefense(int d);

	//AFFICHE LES INFOS DU PERSO
	void showInfos() const;

};

#endif // ZOMBIE_H
