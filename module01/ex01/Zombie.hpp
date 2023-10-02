
#ifndef __ZOMBIE_H__
# define __ZOMBIE_H__

#include <iostream>

class Zombie
{
private:
	std::string _name;


	std::string	getName();

public:
	Zombie(std::string name);
	Zombie();
	~Zombie();

	void setName(std::string name);
	void announce( void );
};

Zombie* zombieHorde( int N, std::string name );
void	deleteZombies(Zombie *zombies);
void	announceZombies(int N, Zombie *zombies);


#endif
