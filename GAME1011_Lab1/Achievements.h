#include <iostream>
#include <string>
class Achievements {
private:
	std::string m_name;
	std::string m_description;
	int m_points;
public:
	Achievements()
	{
		m_name = "";
		m_description = "";
		m_points = 0;
	}
	Achievements(std::string n, std::string d, int p)
	{
		m_name = n;
		m_description = d;
		m_points = p;
	}
	std::string getName()
	{
		return m_name;
	}
	std::string getDesc()
	{
		return m_description;
	}
	int getPoints()
	{
		return m_points;
	}
	void setPoints(int p)
	{
		m_points = p;
	}
	void setName(std::string n)
	{
		m_name = n;
	}
	void setDesc(std::string d)
	{
		m_description = d;
	}

};
#pragma once
