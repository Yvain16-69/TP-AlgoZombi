#include "ZombieBOOM.h"


ZombieBOOM::ZombieBOOM(){
    pv = 100;
    nom = "Boomy";
    attack = 20;
    defense = 0;
    explosion = 60;

}

ZombieBOOM::ZombieBOOM(int p,int a, int d, int e){
    pv = p;
    attack = a;
    defense = d;
    explosion = e;
}

ZombieBOOM::ZombieBOOM(string n){
    nom = n;
}

ZombieBOOM::~ZombieBOOM(){
    cout<<"Bommy a ete detruit"<<endl;
}

int ZombieBOOM::getPv() const
{
    return pv;
}


void ZombieBOOM::setPv(int p) {
	  if (p > 100 || p < 0) {
		      cerr << "ZombieBOOM cree" << endl;
		      pv = 0;
	  }
      else {
		     pv = p;
	  }
}

string ZombieBOOM::getNom()const
{
    return nom;
}

void ZombieBOOM::setNom(string n)
{
    nom = n;
}

int ZombieBOOM::getAttack() const
{
	return attack;
}

void ZombieBOOM::setAttack(int a)
{
	if (a > 20) {
            cerr << "ZombieBOOM detruit" << endl;
		    pv = 0;
	}
	else {
		attack = a;
	}
}


int ZombieBOOM::getDefense() const
{
    return defense;
}

void ZombieBOOM::setDefense(int d)
{
    defense = d;
}

int ZombieBOOM::getExplosion() const
{
    return explosion;
}

void ZombieBOOM::setExplosion(int e)
{
    if (e = 60) {
            cerr << "ZombieBOOM detruit" << endl;
		    pv = 0;
	}
}

void ZombieBOOM::showInfos() const
{
	cout << "nom : " << getNom() << endl;
	cout << "pv : " << getPv() << endl;
	cout << "attack : " << getAttack() << endl;
	cout << "defense : " << getDefense() << endl;
	cout << "explosion : " << getExplosion() << endl;
}
