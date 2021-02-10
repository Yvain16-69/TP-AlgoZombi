#ifndef ZOMBIEBOOM_H
#define ZOMBIEBOOM_H

#include <string>
#include <iostream>
#include <random>
#include <ctime>
#include <stdlib.h>

using namespace std;

class ZombieBOOM
{
    private:
	int pv = 100;
	string nom = "Boomy";
	int attack = 20;
	int defense = 0;
	int explosion = 60;

public:
    //CONSTRUCTEURS
    ZombieBOOM();
    ZombieBOOM(int p, int a, int d, int e);
    ZombieBOOM(string n);


    //DESTRUCTEUR
    ~ZombieBOOM();

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

	//GETTER/SETTER EXPLOSION
	int getExplosion() const;
	void setExplosion(int e);


	//AFFICHE LES INFOS DU PERSO
	void showInfos() const;

};

#endif // ZOMBIEBOOM_H
