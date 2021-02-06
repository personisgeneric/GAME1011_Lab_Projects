#include <iostream>
#include <string>
#include "Platform.h"
#include "Game.h"
std::string placeholderTitle, placeholderDeveloper, placeholderPublisher;



void Platform::initalizeGameList(int y)
{
	gameArr = new Game[y];
	for (int i = 0; i < y; i++)
	{
		std::cout << "Please enter a Title, Developer, and Publisher for the game you want to add.\nTitle: ";
		std::getline(std::cin >> std::ws, placeholderTitle);
		std::cout << "Developer: ";
		std::getline(std::cin >> std::ws, placeholderDeveloper);
		std::cout << "Publisher: ";
		std::getline(std::cin >> std::ws, placeholderPublisher);
		gameArr[i] = Game(placeholderTitle, placeholderDeveloper, placeholderPublisher);

		gameArr[i].initalizeAchievementList();
	}
	numGames = y;
}
void Platform::getGameArray()
{
	for (unsigned int i = 0; i < numGames; i++)
	{
		std::cout << "Game: " << gameArr[i].getTitle() << ", developed by " << gameArr[i].getDev() << ", published by " << gameArr[i].getPub() << ".\n";
		gameArr[i].getAchievementArr();
	}

}
//void Platform::gameSelect() {
//	this->gameArr;
//}
//void Platform::addGame(int s, Game g) {
//	for (unsigned int i = 0; i < s; i++) {
//		
//
//	}
//}