#include "Employee.h"


Employee::Employee(const std::string& n, const std::string& e) {
	name = n;
	email = e;
	location = "Not Set";
	skills = new skill[5];
}

Employee::Employee(const std::string& n, const std::string& e, const std::string& l) {
	name = n;
	email = e;
	location = l;
	skills = new skill[5];
}

std::string Employee::getName() const { return name; }
std::string Employee::getEmail() const { return email; }
std::string Employee::getLocation() const { return location; }

void learn(std::string skill_name) {

}
std::ostream& operator<<(std::ostream& os, const Employee& e) {
	os << "Employee: " << e.name << " - " << e.email << " - " << e.location << std::endl;
	return os;
}