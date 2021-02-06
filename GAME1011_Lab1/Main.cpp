#include "platform.h"
#include "game.h"
#include "achievements.h"
#include <string>
#include <iostream>
std::string placeholderConsole, placeholderManu;
Platform* pPlatformArr;
int numPlatforms;
void initalizePlatformList(int x)
{
	pPlatformArr = new Platform[x];
	int numGames;
	for (int i = 0; i < x; i++)
	{
		std::cout << "Please enter a Platform and Manufacturer.\nPlatform: ";
		std::getline(std::cin >> std::ws, placeholderConsole);
		std::cout << "Manufacturer: ";
		std::getline(std::cin >> std::ws, placeholderManu);
		pPlatformArr[i] = Platform(placeholderConsole, placeholderManu);
		std::cout << "Please enter the number of games you want.\n";
		std::cin >> numGames;
		pPlatformArr[i].initalizeGameList(numGames);
	}
	numPlatforms = x;
}
void getPlatformArray()
{
	for (unsigned int i = 0; i < numPlatforms; i++)
	{
		std::cout << "===================================\n===================================\n";
		std::cout << "Platform: " << pPlatformArr[i].getName() << ", manufactured by " << pPlatformArr[i].getManu() << ".\n";
		pPlatformArr[i].getGameArray();
	}
}
int main()
{
	int numPlats;
	std::cout << "Welcome to the Achievement maker. How many Platforms would you like to add?\n";
	std::cin >> numPlats;
	initalizePlatformList(numPlats);
	getPlatformArray();
	return 0;
}