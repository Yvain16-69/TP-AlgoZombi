#include <iostream>
#include "Zombie.h"
#include "ZombieBOOM.h"

using namespace std;

int main()
{
    srand(time(NULL));

	    Zombie z1;
	    z1.showInfos();

	    z1.setNom("Henry");
	    z1.setPv(100);
        z1.setAttack(10);
	    z1.showInfos();
	    cout << endl;

	    ZombieBOOM z2;

	    z2.setNom("Boomy");
	    z2.setPv(100);
        z2.setAttack(20);
	    z2.showInfos();
	    cout << endl;

    return 0;
}
