#include "Zombie.hpp"

int main()
{
	Zombie *zombie;

	zombie = newZombie("ahmet");
	randomChump("mete");
	zombie->announce();
	delete zombie;
}
