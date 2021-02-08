#include <iostream>
#include <string>
#include "PlayerCreate.h"
#include "Weapon.h"
//Array for holding the characters and int to define the size of the array
Player** g_characterList;
int g_sizeOfArray;
//Global Weapon identifiers
Weapon g_daggers("Daggers",
	"Though small in appearance, they can be devastating. Always carry these where they're easy to reach and you'll never miss the opportunity to strike.",
	20, "Silent Take-Down: When unseen for 3 turns, you gain the ability to instantly kill a target with up to 35% more health than you.");

Weapon g_sword("Sword",
	"The standard 'New Adventurer' weapon. Well rounded, usable by anyone.",
	35, "Riposte: Instead of blocking, you can parry Enemy attacks for 40% of your maximum damage.");

Weapon g_wand("Wand", "A Magic Wand. Nice and Supple, made from a Phoenix' feather and Holly Wood. This wand can do great things, for good or for evil...",
	30, "Phenomenal Magical Power: Killing a unit permanently increases your wands power by 2%.");

void initializeCharacterSaves(int x)
{
	g_characterList = new Player *[x];
	for (unsigned int i =0; i < sizeof(g_characterList); i++)
	{
		g_characterList[i] = nullptr;
	}
	
}

void PlayerCreate()
{
	int player = 0;
	
	initializeCharacterSaves(10);
	Player* placeHolder = nullptr;
	std::string tempName;
	
	std::cout << "Welcome to the character creator.First, please choose a name for your character.\n";
	std::getline(std::cin >> std::ws, tempName);
	std::cout << "Please choose the race you would like to play as.The options are as follows:\n1. Human\n2. Orc\n3. Elf\n";
	int select;
	std::cin >> select;	
	switch (select)
	{
	case 1:
	{
		placeHolder = new Human(tempName, 150, new Weapon());
		break;
	}
	case 2:
	{
		placeHolder = new Orc(tempName, 200, new Weapon());
		break;
	}
	case 3:
	{
		placeHolder = new Elf(tempName, 125, new Weapon());
	}
	default:
		break;
	}
	int choice;
	std::cout << "Here are the weapons that we have available for you.\n1. A pair of Daggers\n2. A Broadsword\n3. A Magical Wand.\n";
	std::cout << "Please select one of the weapons above.\n";
	std::cin >> choice;
	switch (choice)
	{
	case 1:
	{
		placeHolder->setWeapon(new Weapon(g_daggers));
		
		break;
	}
	case 2:
	{
		placeHolder->setWeapon(new Weapon(g_sword));
		break;
	}
	case 3:
	{
		placeHolder->setWeapon(new Weapon(g_wand));
		break;
	}
	default:
		break;

	}
	//Quickly check to see if there is enough space to save a new character. If not, increase the array by 10.
	if(g_characterList[g_sizeOfArray] != nullptr)
	{
		Player** tmpArr = new Player*[g_sizeOfArray + 10];
		for(int i=0; i< g_sizeOfArray; i++)
		{
			tmpArr[i] = g_characterList[i];
		}
		delete[] g_characterList;
		g_characterList = tmpArr;
		
	}
	
	for(int i =0; i < g_sizeOfArray; i++)
	{
		if(g_characterList[i] == nullptr)
		{
			g_characterList[i] = placeHolder;
			break;
		}
	}
	placeHolder = nullptr;
	


}
void viewCharacters()
{
	for(unsigned int i =0; i < g_sizeOfArray; i++)
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
	//int select;
	
	std::cout << "These are the characters currently saved. Please select the corresponding number to delete the character from the list.\n";
	for(int i = 0; i < 10; i++)
	{
		g_characterList[i]->getName();
	}
	
	
}


int main()
{
	g_sizeOfArray = 10;
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