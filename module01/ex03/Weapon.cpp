#include "Weapon.hpp"

Weapon::Weapon() {

}

Weapon::Weapon(std::string newytype) {
	setType(newytype);
}

Weapon::~Weapon() {

}

const std::string& Weapon::getType() {
	return (type);
}

void Weapon::setType(std::string newytype) {
	type = newytype;
}

