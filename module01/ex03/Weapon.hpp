#pragma once
#ifndef __WEAPON_HPP__
# define __WEAPON_HPP__

#include <iostream>

class Weapon
{
	private:
		std::string type;

	public:
		Weapon();
		Weapon(std::string newytype);
		~Weapon();

		void setType(std::string newytype);
		const std::string& getType();
};

#endif
