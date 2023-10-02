#include "Contact.hpp"
#include "PhoneBook.hpp"

int	compare_commands(std::string command, PhoneBook& phonebook)
{
	if (!command.compare("EXIT"))	return (1);
	else if (!command.compare("ADD"))	phonebook.addContact();
	else if (!command.compare("SEARCH"))	phonebook.displayContacts();
	else std::cout << "WRONG COMMAND!" << std::endl;
	return (0);
}

int	main(void)
{
	PhoneBook	phonebook;
	std::string	command;

	std::cout << "Welcome To Best Phonebook Ever" << std::endl;
	while (1)
	{
		std::cout << "command(SEARCH | ADD | EXIT): ";
		std::cin >> command;
		if (compare_commands(command, phonebook)) break ;
	}
	std::cout << "Thanks For Using My PhoneBook" << std::endl;
}
