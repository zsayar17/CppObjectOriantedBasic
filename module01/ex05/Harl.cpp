#include "Harl.hpp"

Harl::Harl() {
	functions[0] = &Harl::debug;
	levels[0] = "DEBUG";
	functions[1] = &Harl::info;
	levels[1] = "INFO";
	functions[2] = &Harl::warning;
	levels[2] = "WARNING";
	functions[3] = &Harl::error;
	levels[3] = "ERROR";
}

Harl::~Harl() {

}

void Harl::debug(void) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger."
	<<	" I really do!" << std::endl;
}

void Harl::info(void) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put"
	<<	" enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for"
	<< " years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) {
	std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
	int	size;

	size = (sizeof(levels) / sizeof(std::string));
	for(int i = 0; i < size; i++)
	{
		if (!levels[i].compare(level))
		{
			(this->*functions[i])();
			return ;
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
