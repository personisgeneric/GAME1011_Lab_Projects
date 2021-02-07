#include "Weapon.h"

#include <iostream>
#include <string>



void Weapon::setAbilityDaggers()
{
	int selectAbility = 0;
	if (m_name == "Dagger")
	{
		std::cout << "Please choose from the following abilities: \n";
		std::cout << "1. Silent Take-down: If unseen for 3 turns, you may assassinate a target within 5 tiles.\n";
		std::cout << "2. Toxic Relationship: At the beginning of combat, and every 4 turns after, your daggers deal normal damage plus 2 damage per turn for 3 turns\n";
		std::cout << "3. This is a knoife!: Your daggers have increased size, allowing you to block attacks from medium sized weapons.\n";
		std::cin >> selectAbility;
		switch (selectAbility)
		{
		case 1:
			{
			m_specialAbility = "Silent Take-Down.";
			break;
			}
		case 2:
			{
			m_specialAbility = "Toxic Relationship.";
			break;
			}
		case 3:
			{
			m_specialAbility = "This is a Knoife!";
			break;
			}
			default:
			{
				break;
			}
		}
	}
}
void Weapon::setAbilitySword()
{
	int selectAbility = 0;
	if (m_name == "Sword")
	{
		std::cout << "Please choose from the following abilities: \n";
		std::cout << "1. Brute Force: If you attack a unit with armor that reduces your damage to 40% or lower, convert the reduced damage to blunt instead of cutting.\n";
		std::cout << "2. Hero's Spin: After taking a turn to prepare, you can use Hero's Spin, an AOE attack that hits all squares surrounding the player.\n";
		std::cout << "3. Riposte: Your block is replaced with a parry. Harder to land, but doing so will completely avoid the enemies attack and strike them for 70% of your normal damage.\n";
		std::cin >> selectAbility;
		switch (selectAbility)
		{
		case 1:
		{
			m_specialAbility = "Brute Force";
			break;
		}
		case 2:
		{
			m_specialAbility = "Hero's Spin";
			break;
		}
		case 3:
		{
			m_specialAbility = "Riposte";
			break;
		}
		default:
		{
			break;
		}
		}
	}
}
void Weapon::setAbilityWand()
{
	int selectAbility = 0;
	if (m_name == "Wand")
	{
		std::cout << "Please choose from the following abilities: \n";
		std::cout << "1. Phenomenal Magical Power: Being the one to deal the finishing blow to an enemy increases the magical power of your wand by 2% permanently.\n";
		std::cout << "2. Untapped Potential: Spells that you cast have a 15% chance to cast the spell +1 level higher than it normally is.\n";
		std::cout << "3. Ley lines: When first entering combat, areas of the map will be aglow. Going to these will refresh your cooldowns by 30%-50% depending on Level.\n";
		std::cin >> selectAbility;
		switch (selectAbility)
		{
		case 1:
		{
			m_specialAbility = "Phenomenal Magical Power";
			break;
		}
		case 2:
		{
			m_specialAbility = "Untapped Potential";
			break;
		}
		case 3:
		{
			m_specialAbility = "Ley lines";
			break;
		}
		default:
		{
			break;
		}
		}
	}
}

