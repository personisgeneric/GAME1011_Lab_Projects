#ifndef _WEAPON_
#define _WEAPON_
#include <string>

class Weapon
{
private:
	std::string m_name;
	std::string m_description;
	int m_damage;
public:

	//Setters
	void setName(std::string n) { m_name = n; }
	void setDesc(std::string d) { m_description = d; }
	void setDamage(int d) { m_damage = d; }

	//Getters
	std::string getName() { return m_name; }
	std::string getDesc() { return m_description; }
	int getDamage() { return m_damage; }

};

#endif