#include <iostream>
#include <string>
#include "Game.h"
#include "achievements.h"
std::string placeholderName, placeholderDesc;
int placeholderPoints;
int numAchieve;
void Game::initalizeAchievementList()
{

	std::cout << "How many Achievements would you like to make?\n";
	std::cin >> numAchieve;
	m_pAchievementsArr = new Achievements[numAchieve];
	for (unsigned int i = 0; i < numAchieve; i++)
	{

		std::cout << "Please enter a Name, Description for the Achievement, and number of points for the achievements\nName: ";
		std::getline(std::cin >> std::ws, placeholderName);
		std::cout << "Description: ";
		std::getline(std::cin >> std::ws, placeholderDesc);
		std::cout << "Points: ";
		std::cin >> placeholderPoints;
		m_pAchievementsArr[i] = Achievements(placeholderName, placeholderDesc, placeholderPoints);
	}
	m_numAchievements = numAchieve;
}
void Game::getAchievementArr()
{
	for (unsigned int j = 0; j < m_numAchievements; j++)
	{
		std::cout << "Achievement: " << m_pAchievementsArr[j].getName() << ", achieved by " << m_pAchievementsArr[j].getDesc() << ", worth " << m_pAchievementsArr[j].getPoints() << " points.\n";
	}

}