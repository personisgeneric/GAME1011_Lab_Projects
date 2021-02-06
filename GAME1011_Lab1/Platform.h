#include "game.h"
#include <iostream>
#include <string>
class Platform
{
private:
	std::string m_name;
	std::string m_manufacturer;
	Game* gameArr;
	int numGames;
public:
	Platform()
	{
		m_name = "";
		m_manufacturer = "";
	}
	Platform(std::string n, std::string m)
	{
		m_name = n;
		m_manufacturer = m;
	}
	std::string getName()
	{
		return m_name;
	}
	std::string getManu()
	{
		return m_manufacturer;
	}
	void getGameArray();
	//void gameSelect();
	//void platSelect();
	void initalizeGameList(int y);
};
#pragma once
