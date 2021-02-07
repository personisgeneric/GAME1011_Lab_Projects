#include "PlayerCreate.h"
#include <iostream>

void Human::DisplayInfo()
{
	std::cout << m_name << ", Human, " << m_health << " HP, wielding the " << " "
	<< ". Special trait: Human ingenuity: You are able to craft useful items from scrap and leftover materials more easily.\n";
}

void Human::setTrait()
{
	m_uniqueTrait = "Human ingenuity: You are able to craft useful items from scrap and leftover materials more easily.";
}

void Orc::DisplayInfo()
{
	std::cout << m_name << ", Orc, " << m_health << " HP, wielding the " << " "
	<< ". Special trait: Ignore pain: Be it from extreme toughness or extreme stupidity, when you take damage it will take longer for you to receive it's affects than normal.\n";
}


void Elf::DisplayInfo()
{
	std::cout << m_name << ", Elf, " << m_health << " HP, wielding the " << " "
	<< ". Special trait: One with All: Using your inherent connection with Nature, if you are not being targeted directly by an attack, health for 5% of your missing health..\n";
}

