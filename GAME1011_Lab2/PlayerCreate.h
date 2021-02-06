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
	Human();
	Human(std::string n);
	~Human();
	virtual void DisplayInfo() override;

};

class Orc : public Player
{
private:
	std::string m_uniqueTrait;
public:
	virtual void DisplayInfo() override;
	Orc();
	Orc(std::string n);
	~Orc();
};

class Elf : public Player
{
private:
	std::string m_uniqueTrait;
public:
	virtual void DisplayInfo() override;
	Elf();
	Elf(std::string n);
	~Elf();
};



#endif
