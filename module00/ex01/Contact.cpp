#include "Contact.hpp"

Contact::Contact()
{
	fillMessages();
}

Contact::~Contact()
{

}

void	Contact::fillMessages()
{
	messages[FIRST_NAME] = "Please Entry First Name: ";
	messages[LAST_NAME] = "Please Entry Last Name: ";
	messages[NICK_NAME] = "Please Entry Nick Name: ";
	messages[TEL_NUMBER] = "Please Entry Telephone Number: ";
	messages[DARKEST_SECRET] = "Please Entry Darkest Secret: ";
}

void	Contact::fillContact()
{
	int			index;

	index = 0;
	while (index < CONTACT_INFO_COUNT)
	{
		std::cout << messages[index];
		std::cin >> contact_infos[index];
		if (index == TEL_NUMBER && !isAllNumber(contact_infos[index]))
		{
			std::cout << "INVALID PHONE NUMBER!" << std::endl;
			continue ;
		}
		if (contact_infos[index].length() > 10)	{
			contact_infos[index][9] = '.';
			contact_infos[index].erase(contact_infos[index].begin() + 10, contact_infos[index].end());

		}
		else if (contact_infos[index].length() < 10)
			contact_infos[index].insert((contact_infos[index]).begin(), 10 - contact_infos[index].length(), ' ');
		index++;
	}
}

void	Contact::displayContact(int index, int mode)
{
	int new_mode;

	if (mode == MODE_BEGIN_INFO)
	{
		new_mode = TEL_NUMBER;
		std::cout << "         " << index << "|";
	}
	else	new_mode = CONTACT_INFO_COUNT;
	for (int i = 0; i < new_mode; i++)
	{
		std::cout << contact_infos[i];
		if (i != new_mode - 1)
			std::cout << "|";
	}
}

bool	Contact::isAllNumber(std::string string)
{
	for (int i = 0; i < (int)string.length(); i++)
	{
		if (string[i] < '0' || string[i] > '9')
			return (false);
	}
	return (true);
}



