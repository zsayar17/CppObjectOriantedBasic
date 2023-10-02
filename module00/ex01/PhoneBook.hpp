#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include "Contact.hpp"
# include <string>


class PhoneBook {
	private:
		static const int MAX_CONTACT_COUNT = 8;

		Contact contacts[MAX_CONTACT_COUNT];

		int		added_count;

		bool	displayPrompt();
		void	displayInfos();
		void	upContactCount();
	public:
		PhoneBook();
		~PhoneBook();

		void	addContact();
		void	displayContacts();
};

#endif
