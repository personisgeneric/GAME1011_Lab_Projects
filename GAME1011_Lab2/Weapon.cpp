#include "Weapon.h"

#include <iostream>
#include <string>



std::ostream &operator<<(std::ostream &os, Weapon w)
{
	os <<"Wields " << w.getName() << ".\n" << w.getDesc() << " able to deal " << w.getDamage() << " damage.\nPossesses the special ability " << w.getAbility();
	return os;
}
