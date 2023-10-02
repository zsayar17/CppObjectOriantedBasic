#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	setName(name);
}

Zombie::~Zombie()
{
	std::cout << getName() << ": zombie is died\n";
}

void	Zombie::announce() {
	std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName() {
	return (_name);
}

void Zombie::setName(std::string name) {
	_name = name;
}
