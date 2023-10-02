#pragma once
#ifndef __HARL_H__
#define __HARL_H__

#include <iostream>

class Harl
{
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

	void (Harl::*functions[4])(void);
	std::string levels[4];
public:
	Harl();
	~Harl();

	void complain(std::string level);
};

#endif
