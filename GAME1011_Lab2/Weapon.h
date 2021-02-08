#ifndef _WEAPON_
#define _WEAPON_
#include <string>
#include <utility>

class Weapon
{
public:
	std::string m_name;
	std::string m_description;
	int m_damage;
	std::string m_specialAbility;
	Weapon()
	{
		m_name ="";
		m_description = "";
		m_damage = 0;
		m_specialAbility = "";
	}
	Weapon(std::string n, std::string d, int dA, std::string sA)
	{
		m_name = n;
		m_description = d;
		m_damage = dA;
		m_specialAbility = sA;
	}
	~Weapon(){}

	//Setters
	void setName(std::string n) { m_name = std::move(n); }
	void setDesc(std::string d) { m_description = std::move(d); }
	void setDamage(int d) { m_damage = d; }
	friend std::ostream& operator<<(std::ostream& os, Weapon w);

	//Getters
	 std::string getName() { return m_name; }
	 std::string getDesc() { return m_description; }
	 int getDamage() { return m_damage; }
	 std::string getAbility() { return m_specialAbility; }

};

#endif