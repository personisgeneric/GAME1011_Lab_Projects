#include <iostream>
#include <string>
#include "PlayerCreate.h"
#include "Weapon.h"
Player** g_characterList;
void initializeCharacterSaves(int x)
{
	g_characterList = new Player *[x];
	for (unsigned int i =0; i < sizeof(g_characterList); i++)
	{
		g_characterList[i] = nullptr;
	}
	
}
void weaponSelect(Player* p)
{
	int choice;
	std::cout << "Here are the weapons that we have available for you.\n1. A pair of Daggers\n2. A Broadsword\n3. A Magical Wand.\n";
	std::cout << "Please select one of the weapons above.\n";
	std::cin >> choice;
	switch(choice)
	{
	case 1:
		{
		int selectAbility = 0;

		std::cout << "Please choose from the following abilities: \n";
		std::cout << "1. Silent Take-down: If unseen for 3 turns, you may assassinate a target within 5 tiles.\n";
		std::cout << "2. Toxic Relationship: At the beginning of combat, and every 4 turns after, your daggers deal normal damage plus 2 damage per turn for 3 turns\n";
		std::cout << "3. This is a knoife!: Your daggers have increased size, allowing you to block attacks from medium sized weapons.\n";
		std::cin >> selectAbility;
		switch (selectAbility)
		{
		case 1:
		{
			p->setWeapon(new Weapon("Daggers",
				"Twin blades, though small in appearance are devastating when used correctly. Always carry these where they're easy to reach and you'll never miss the opportunity to strike.",
				20, "Silent Take-Down"));
			//setAbility("Silent Take-Down.");
			break;
		}
		case 2:
		{
			p->setWeapon(new Weapon("Daggers",
				"Twin blades, though small in appearance are devastating when used correctly. Always carry these where they're easy to reach and you'll never miss the opportunity to strike.",
				20, "Toxic Relationship."));
			//setAbility();
			break;
		}
		case 3:
		{
			p->setWeapon(new Weapon("Daggers",
				"Twin blades, though small in appearance are devastating when used correctly. Always carry these where they're easy to reach and you'll never miss the opportunity to strike.",
				20, "This is a Knoife!"));
			//setAbility();
			break;
		}
		default:
		{
			break;
		}
		}
		break;
		}
	case 2:
		{
		int selectAbility = 0;
		std::cout << "Please choose from the following abilities: \n";
		std::cout << "1. Brute Force: If you attack a unit with armor that reduces your damage to 40% or lower, convert the reduced damage to blunt instead of cutting.\n";
		std::cout << "2. Hero's Spin: After taking a turn to prepare, you can use Hero's Spin, an AOE attack that hits all squares surrounding the player.\n";
		std::cout << "3. Riposte: Your block is replaced with a parry. Harder to land, but doing so will completely avoid the enemies attack and strike them for 70% of your normal damage.\n";
		std::cin >> selectAbility;
		switch (selectAbility)
		{
		case 1:
		{
			p->setWeapon(new Weapon("Sword",
				"The standard 'New Adventurer' weapon. Well rounded, usable by anyone, become the master of this and you'll scarcely find yourself unable to fight,should your main weapon be gone.",
				35, "Brute Force"));
			//setAbility();
			break;
		}
		case 2:
		{
			p->setWeapon(new Weapon("Sword",
				"The standard 'New Adventurer' weapon. Well rounded, usable by anyone, become the master of this and you'll scarcely find yourself unable to fight,should your main weapon be gone.",
				35, "Hero's Spin"));
			//setAbility();
			break;
		}
		case 3:
		{
			p->setWeapon(new Weapon("Sword",
				"The standard 'New Adventurer' weapon. Well rounded, usable by anyone, become the master of this and you'll scarcely find yourself unable to fight,should your main weapon be gone.",
				35, "Riposte"));
			//setAbility();
			break;
		}
		default:
		{
			break;
		}
		}
		
		//p->getWeapon()->setAbilitySword();
		break;
		}
	case 3:
		{
		int selectAbility = 0;

		std::cout << "Please choose from the following abilities: \n";
		std::cout << "1. Phenomenal Magical Power: Being the one to deal the finishing blow to an enemy increases the magical power of your wand by 2% permanently.\n";
		std::cout << "2. Untapped Potential: Spells that you cast have a 15% chance to cast the spell +1 level higher than it normally is.\n";
		std::cout << "3. Ley lines: When first entering combat, areas of the map will be aglow. Going to these will refresh your cooldowns by 30%-50% depending on Level.\n";
		std::cin >> selectAbility;
		switch (selectAbility)
		{
		case 1:
		{
			p->setWeapon(new Weapon("Wand", "A Magic Wand. Nice and Supple, made from a Phoenix' feather and Holly Wood. This wand can do great things, for good or for evil...",
				30, "Phenomenal Magical Power"));
			break;
		}
		case 2:
		{
			p->setWeapon(new Weapon("Wand", "A Magic Wand. Nice and Supple, made from a Phoenix' feather and Holly Wood. This wand can do great things, for good or for evil...",
				30, "Untapped Potential"));
			//setAbility);
			break;
		}
		case 3:
		{
			p->setWeapon(new Weapon("Wand", "A Magic Wand. Nice and Supple, made from a Phoenix' feather and Holly Wood. This wand can do great things, for good or for evil...",
				30, "Ley lines"));
			//setAbility();
			break;
		}
		default:
		{
			break;
		}
		}
		
		//p->getWeapon()->setAbilityWand();
		break;
		}
	default:
		break;
	}
}
void createHuman()
{
	
	
	for(unsigned int i = 0; i < sizeof(g_characterList); i++)
	{
		if(g_characterList[i] == nullptr)
		{
			std::string tempName;
			std::cout << "Please enter a name for your Human character.\n";
			std::getline(std::cin >> std::ws, tempName);
			g_characterList[i] = new Human(tempName,150);
			std::cout << "Please choose a Weapon.\n";
			weaponSelect(g_characterList[i]);
			break;
			
		}		
	}
	
}

void createOrc()
{
	
	for (unsigned int i = 0; i < sizeof(g_characterList); i++)
	{
		if (g_characterList[i] == nullptr)
		{
			std::string tempName;
			std::cout << "Please enter a name for your Orc character.\n";
			std::getline(std::cin >> std::ws, tempName);
			g_characterList[i] = new Orc(tempName, 200);
			std::cout << "Please choose a Weapon.\n";
			weaponSelect(g_characterList[i]);
			break;
		}
		
	}
}

void createElf()
{
	
	for (unsigned int i = 0; i < sizeof(g_characterList); i++)
	{
		if (g_characterList[i] == nullptr)
		{
			std::string tempName;
			std::cout << "Please enter a name for your Elf character.\n";
			std::getline(std::cin >> std::ws, tempName);
			g_characterList[i] = new Elf(tempName, 125);
			std::cout << "Please choose a Weapon.\n";
			weaponSelect(g_characterList[i]);
			break;
		}
	}
}

void PlayerCreate()
{
	int player = 0;
	std::cout << "Welcome to the character creator.\n";
	initializeCharacterSaves(10);
	do {
		std::cout << "Please choose what type of character you want to make.\n";
		std::cout << "1. Human\n2. Orc\n3. Elf\n4. Exit to menu\n";
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
		default:
			break;
		}
	} while (player != 4);

}
void viewCharacters()
{
	for(unsigned int i =0; i < sizeof(g_characterList); i++)
	{
		if(g_characterList[i] != nullptr)
		{
			g_characterList[i]->DisplayInfo();
		}
		else
		{
			break;
		}
		
	}
}

void deleteCharacter()
{
	int select;
	int i = 0;
	std::cout << "These are the characters currently saved. Please select the corresponding number to delete the character from the list.\n";
	for(i <10; i++;)
	{
		g_characterList[i]->getName();
	}
	std::cin >> select;
	if(select > sizeof(g_characterList[i]))
	{
		std::cout << "Invalid selection. Returning to main menu.\n";
	}
	else
	{
		g_characterList[select] = new Human();
	}
	
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
			viewCharacters();
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
		default:
			break;
		}

	} while (selection != 4);
	return 0;
}