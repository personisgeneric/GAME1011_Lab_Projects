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

void createHuman()
{
	
	std::string tempName;
	std::cout << "Please enter a name for your human character.\n";
	std::cin >> tempName;
	for(unsigned int i = 0; i < sizeof(savedCharacters[INT_MAX]); i++)
	{
		if(savedCharacters[i]->getHealth() ==0)
		{
			savedCharacters[i] = new Human(tempName);
			
		}
		else
		{
			for (unsigned int j = i; j < (i +10); j++)
			{
				savedCharacters[j] = new Human();
			}
			for (unsigned int k = 0; k < sizeof(savedCharacters[INT_MAX]); k++)
			{
				savedCharacters[k] = new Human(tempName);
			}
			
		}
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