#include "Zombie.hpp"

void	announceZombies(int N, Zombie *zombies) {
	for (int i = 0; i < N; i++) zombies[i].announce();
}

void	deleteZombies(Zombie *zombies)
{
	delete[] zombies;
}

Zombie* zombieHorde( int N, std::string name ) {
	Zombie *zombies;

	if (N <= 0)
	{
		std::cout << "INVALID COUNT!\n";
		return (NULL);
	}
	zombies = new Zombie[N];
	for (int i = 0; i < N; i++) zombies[i].setName(name);
	return (zombies);
}
