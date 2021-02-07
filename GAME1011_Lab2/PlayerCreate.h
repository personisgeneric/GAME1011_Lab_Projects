#pragma once
#ifndef _PLAYER_CREATE_
#define _PLAYER_CREATE_
#include <string>

#include "Weapon.h"

class Player
{
public:
	std::string m_name;
	int m_health = 0;
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
	Weapon* getWeapon() { return m_weapon; }
};

class Human : public Player
{
private:
	std::string m_uniqueTrait;
public:
	Human()
	{
		m_name = nullptr;
		m_health = 0;
		
	}
	Human(std::string n, int h)
	{
		m_name = n;
		m_health = h;
	}
	~Human();
	virtual void DisplayInfo() override;

	//Setter
	void setTrait();
	//Getter
	std::string getTrait() { return m_uniqueTrait; }
};

class Orc : public Player
{
private:
	std::string m_uniqueTrait;
public:
	virtual void DisplayInfo() override;
	Orc()
	{
		m_name = "";
		m_health = 0;
		
	}
	Orc(std::string n, int h)
	{
		m_name = n;
		m_health = h;
	}
	~Orc();
	//Setter
	void setTrait();
	//Getter
	std::string getTrait() { return m_uniqueTrait; }
};

class Elf : public Player
{
private:
	std::string m_uniqueTrait;
public:
	virtual void DisplayInfo() override;
	Elf()
	{
		m_name = "";
		m_health = 0;
		
	}
	Elf(std::string n, int h)
	{
		m_name = n;
		m_health = h;
	}
	~Elf();
	//Setter
	void setTrait();
	//Getter
	std::string getTrait() { return m_uniqueTrait; }
};



#endif
