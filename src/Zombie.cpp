#include "Zombie.h"

Zombie::Zombie(){
    pv = 100;
    nom = "Thierry";
    attack = 11;
    defense = 0;

}

Zombie::Zombie(int p,int a, int d){
    pv = p;
    attack = a;
    defense = d;
}

Zombie::Zombie(string n){
    nom = n;
}

Zombie::~Zombie(){
   cout<<"Thierry a ete detruit"<<endl;
}

int Zombie::getPv() const
{
    return pv;
}


void Zombie::setPv(int p) {
	  if (p > 100 || p < 0) {
		      cerr << "Zombie cree" << endl;
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
            cerr << "Zombie detruit" << endl;
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






















