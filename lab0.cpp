#include <iostream>
#include "Employee.h"
#include "Intern.h"

int main() {
	std::string n1 = "Erin";
	std::string n2 = "Rich";
	std::string e1 = "ew87@notreal.com";
	std::string e2 = "rijozwo@notreal.com";
	std::string c1 = "Loyola University";
	std::string l1 = "Endicott, NY";
	std::string l2 = "Binghamton, NY";
	
	Employee erin(n1, e1);
	Intern rich(n1, e1);

	std::cout << erin << std::endl;
	std::cout << rich << std::endl;

	erin.setLocation(l1);
	rich.setLocation(l2);

	rich.setCollege(c1);
	std::cout << rich << std::endl;

	rich.learnSkill("C++");
	rich.learnSkill("C++");
	rich.learnSkill("Java");

	rich.showSkill();
	rich.clearSkill("C++");
	rich.calculateSalary();
}