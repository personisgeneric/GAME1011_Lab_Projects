#ifndef _WEAPON_
#define _WEAPON_
#include <string>

class Weapon
{
private:
	std::string m_name;
	std::string m_description;
	int m_damage;
	std::string m_specialAbility;
public:
	Weapon(std::string n, std::string d, int dA, std::string sA)
	{
		m_name = n;
		m_description = d;
		m_damage = dA;
		m_specialAbility = sA;
	}
	//Setters
	void setName(std::string n) { m_name = n; }
	void setDesc(std::string d) { m_description = d; }
	void setDamage(int d) { m_damage = d; }
	//void setAbilityDaggers();
	//void setAbilitySword();
	//void setAbilityWand();
	//void setAbility(std::string a) { m_specialAbility = a; }

	//Getters
	std::string getName() { return m_name; }
	std::string getDesc() { return m_description; }
	int getDamage() { return m_damage; }
	std::string getAbility() { return m_specialAbility; }

};

#endif