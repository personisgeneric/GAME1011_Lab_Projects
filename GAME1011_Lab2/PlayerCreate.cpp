#include "PlayerCreate.h"
#include "Weapon.h"
#include <iostream>

void Human::DisplayInfo()
{
	std::cout << getName() << ", Human, " << getHealth() << " HP.\n" << *getWeapon() << "\nSpecial trait: Human ingenuity: You are able to craft useful items from scrap and leftover materials more easily.\n";
}


void Orc::DisplayInfo()
{
	std::cout << getName() << ", Orc, " << getHealth() << " HP.\n" << *getWeapon()
	<< "\nSpecial trait: Ignore pain: Be it from extreme toughness or extreme stupidity, when you take damage it will take longer for you to receive it's affects than normal.\n";
}


void Elf::DisplayInfo()
{
	std::cout << getName() << ", Elf, " << getHealth()
	<< " HP.\n" << *getWeapon() << "\nSpecial trait: One with All: Using your inherent connection with Nature, if you are not being targeted directly by an attack, health for 5% of your missing health.\n";
}



