#include "PlayerCreate.h"
#include "Weapon.h"
#include <iostream>

void Human::DisplayInfo()
{
	std::cout << getName() << ", Human, " << getHealth() << " HP, wielding the " << getWeapon() <<
		".\nSpecial trait: Human ingenuity: You are able to craft useful items from scrap and leftover materials more easily.\n";
}


void Orc::DisplayInfo()
{
	std::cout << getName() << ", Orc, " << getHealth() << " HP, wielding the " << getWeapon()
	<< ".\nSpecial trait: Ignore pain: Be it from extreme toughness or extreme stupidity, when you take damage it will take longer for you to receive it's affects than normal.\n";
}


void Elf::DisplayInfo()
{
	std::cout << getName() << ", Elf, " << getHealth() << " HP, wielding the " << getWeapon()
	<< ".\nSpecial trait: One with All: Using your inherent connection with Nature, if you are not being targeted directly by an attack, health for 5% of your missing health.\n";
}
std::ostream& operator<<(std::ostream& os, Weapon w)
{
	os << w.getName() << ", " << w.getDesc() << ", able to deal " << w.getDamage() << " damage, possessing the special ability " << w.getAbility();
	return os;
}

