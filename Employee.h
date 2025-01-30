#pragma once
#include <string>
#include <iostream>
#include <array>
#include <iterator>

class Employee
{
private:
	std::string name;
	std::string email;
	std::string location;
	
	struct skill {
		std::string skill_name;
		int skill_level;
	};

	skill* skills;
	

public:
	Employee(const std::string& n, const std::string& e);
	Employee(const std::string& n, const std::string& e, const std::string &l);
	std::string getName() const;
	std::string getEmail() const;
	std::string getLocation() const;

	void learn(std::string);

	friend std::ostream& operator<<(std::ostream& os, const Employee& e);


};

