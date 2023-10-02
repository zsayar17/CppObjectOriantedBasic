#include "Zombie.hpp"

int main()
{
	Zombie *zombies;

	zombies = zombieHorde(10, "METOS");
	announceZombies(10, zombies);
	deleteZombies(zombies);
}
