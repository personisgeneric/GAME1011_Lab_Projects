#include <iostream>
#include <string>
#include "PlayerCreate.h"
#include "Weapon.h"
Player* savedCharacters[];
void initializeCharacterSaves()
{
	for(unsigned int i =0; i <10; i++)
	{
		savedCharacters[i] = new Human();
	}
	
}
void weaponSelect(Player* p)
{
	;
	int choice;
	std::cout << "Here are the weapons that we have available for you.\n1. A pair of Daggers\n2. A Broadsword\n3. A Magical Wand.\n";
	std::cout << "Please select one of the weapons above.\n";
	std::cin >> choice;
	switch(choice)
	{
	case 1:
		{
		p->setWeapon(new Weapon("Daggers",
			"Twin blades, though small in appearance are devastating when used correctly. Always carry these where they're easy to reach and you'll never miss the opportunity to strike.", 20));
		p->getWeapon()->setAbilityDaggers();
		break;
		}
	case 2:
		{
		p->setWeapon(new Weapon("Sword",
			"The standard 'New Adventurer' weapon. Well rounded, usable by anyone, become the master of this and you'll scarcely find yourself unable to fight,should your main weapon be gone.",
			35));
		p->getWeapon()->setAbilitySword();
		break;
		}
	case 3:
		{
		p->setWeapon(new Weapon("Wand", "A Magic Wand. Nice and Supple, made from a Phoenix' feather and Holly Wood. This wand can do great things, for good or for evil...", 30));
		p->getWeapon()->setAbilityWand();
		break;
		}
	default:
		break;
	}
}
void createHuman()
{
	
	std::string tempName;
	std::cout << "Please enter a name for your human character.\n";
	std::cin >> tempName;
	for(unsigned int i = 0; i < sizeof(savedCharacters[10]); i++)
	{
		if(savedCharacters[i]->getHealth() ==0)
		{
			savedCharacters[i] = new Human(tempName);
			
		}
		else
		{
			std::cout << "Unable to create new character, return to menu.\n";
			break;
			
		}
		std::cout << "Please choose a Weapon.\n";
		weaponSelect(savedCharacters[i]);
	}
	
}

void createOrc()
{
	std::string tempName;
	std::cout << "Please enter a name for your human character.\n";
	std::cin >> tempName;
}

void createElf()
{
	std::string tempName;
	std::cout << "Please enter a name for your human character.\n";
	std::cin >> tempName;
}

void PlayerCreate()
{
	int player = 0;
	initializeCharacterSaves();
	do {
		//if()
		std::cout << "Please choose what type of character you want to make.\n";
		std::cin >> player;
		switch (player)
		{
		case 1:
		{
			createHuman();
			break;
		}
		case 2:
		{
			createOrc();
			break;
		}
		case 3:
		{
			createElf();
			break;
		}
		case 4:
		{
			break;
		}
		}
	} while (player != 4);

}





int main()
{
	int selection = 0;
	std::cout << "Welcome to the Custom Player Creator!\n";
	do
	{
		std::cout << "Please choose from the following options:\n1. Create New Character\n2. View Created Characters\n3. Delete Character\n4. Exit Creator.\n";
		std::cin >> selection;
		switch (selection)
		{
		case 1:
		{
			PlayerCreate();
			break;
		}
		case 2:
		{
			viewCharacter();
			break;
		}
		case 3:
		{
			deleteCharacter();
			break;
		}
		case 4:
		{
			break;
		}
		}

	} while (selection != 4);
	return 0;
}