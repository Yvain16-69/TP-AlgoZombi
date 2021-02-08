#include "Zombie.h"

Zombie::Zombie(){
    pv = 100;
    nom = "Henri";
    attack = 10;
    defense = 0;

}

Zombie::Zombie(int p,int a, int d){
    pv = p;
    atack = a;
    defense = d;
}

Zombie::Zombie(string n){
    nom = n;
}

Zombie::~Zombie(){
    cout<<"Le zombie a été détruit"<<endl;
}

int Zombie::getPv() const
{
    return pv;
}


void Zombie::setPv(int p) {
	  if (p > 100 || s < 0) {
		      cerr << "Zombie détruit" << endl;
		      pv = 0;
	  }
      else {
		     pv = p;
	  }
}

string Zombie::getNom()const
{
    return nom;
}

void Zombie::setNom(string n)
{
    nom = n;
}

int Zombie::getAttack() const
{
	return attack;
}

void Zombie::setAttack(int a)
{
	if (a > 10) {
            cerr << "Zombie détruit" << endl;
		    pv = 0;
	}
	else {
		attack = a;
	}
}


int Zombie::getDefense() const
{
    return defense;
}

void Zombie::setDefense(int d)
{
    defense = d;
}

void Zombie::showInfos() const
{
	cout << "nom : " << getNom() << endl;
	cout << "pv : " << getPv() << endl;
	cout << "attack : " << getAttack() << endl;
	cout << "defense : " << getDefense() << endl;
}






















