#pragma once
#ifndef _PLAYER_CREATE_
#define _PLAYER_CREATE_
#include <string>

#include "Weapon.h"

class Player
{
public:
	std::string m_name;
	int m_health;
	Weapon* m_weapon;

	// Pure Virtual function
	virtual void DisplayInfo() = 0;

	//Setters
	void setName(std::string n) { m_name = n; }
	void setHealth(int h) { m_health = h; }
	void setWeapon(Weapon* w) { w = m_weapon; }

	//Getters
	std::string getName() { return m_name; }
	int getHealth() { return m_health; }
};

class Human : public Player
{
private:
	std::string m_uniqueTrait;
public:
	Human()
	{
		m_health = 150;
	}
	Human(std::string n)
	{
		m_name = n;
	}
	~Human();
	virtual void DisplayInfo() override;
	void setTrait();

};

class Orc : public Player
{
private:
	std::string m_uniqueTrait;
public:
	virtual void DisplayInfo() override;
	Orc()
	{
		m_health = 200;
	}
	Orc(std::string n)
	{
		m_name = n;
	}
	~Orc();
};

class Elf : public Player
{
private:
	std::string m_uniqueTrait;
public:
	virtual void DisplayInfo() override;
	Elf()
	{
		m_health = 125;
	}
	Elf(std::string n)
	{
		m_name = n;
	}
	~Elf();
};



#endif
