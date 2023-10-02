#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	added_count = 0;
}

PhoneBook::~PhoneBook()
{

}

bool	PhoneBook::displayPrompt()
{
	if (added_count == 0)
	{
		std::cout << "THERE IS NOT ANY CONTACT INFO YET!" << std::endl;
		return (false);
	}
	for (int i = 0; i < added_count; i++)
	{
		contacts[i].displayContact(i + 1, contacts[i].MODE_BEGIN_INFO);
		if (i != added_count - 1)	std::cout << std::endl;
	}
	return (true);
}

void	PhoneBook::displayInfos()
{
	int	index;

	std::cout << std::endl << "Number Of Index: ";
	std::cin >> index;
	if (index < 1 || index > added_count)
	{
		std::cout << "Out Of Range!" << std::endl;
		displayInfos();
		return ;
	}
	contacts[index - 1].displayContact(index, contacts[index].MODE_ALL);
	std::cout << std::endl;
}

void	PhoneBook::displayContacts()
{
	if (displayPrompt()) displayInfos();
}

void	PhoneBook::addContact()
{
	upContactCount();
	contacts[added_count - 1].fillContact();
}

void	PhoneBook::upContactCount()
{
	if (added_count != MAX_CONTACT_COUNT)
	{
		added_count++;
		return ;
	}
	for (int i = 0; i < MAX_CONTACT_COUNT - 1; i++)	contacts[i] = contacts[i + 1];
}

