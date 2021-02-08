#include <iostream>
#include <string>
#include "PlayerCreate.h"
#include "Weapon.h"
//Array for holding the characters
Player** g_characterList;
//Global Weapon identifiers
Weapon g_daggers("Daggers",
	"Twin blades, though small in appearance are devastating when used correctly. Always carry these where they're easy to reach and you'll never miss the opportunity to strike.",
	20, "Silent Take-Down");

Weapon g_sword("Sword",
	"The standard 'New Adventurer' weapon. Well rounded, usable by anyone, become the master of this and you'll scarcely find yourself unable to fight,should your main weapon be gone.",
	35, "Riposte");
Weapon g_wand("Wand", "A Magic Wand. Nice and Supple, made from a Phoenix' feather and Holly Wood. This wand can do great things, for good or for evil...",
	30, "Phenomenal Magical Power");

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
		p->setWeapon(g_daggers);
		break;
		}
	case 2:
		{
		p->setWeapon(g_sword);
		break;
		}
	case 3:
		{
		p->setWeapon(g_wand);
		break;
		}
		
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
	}
}

void deleteCharacter()
{
	//int select;
	
	std::cout << "These are the characters currently saved. Please select the corresponding number to delete the character from the list.\n";
	for(int i = 0; i < 10; i++)
	{
		g_characterList[i]->getName();
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