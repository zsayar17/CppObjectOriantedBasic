#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <string>

class Contact {
	private:
		enum {
			FIRST_NAME, LAST_NAME, NICK_NAME, TEL_NUMBER, DARKEST_SECRET, CONTACT_INFO_COUNT
		};

		// Vars
		std::string contact_infos[CONTACT_INFO_COUNT];
		std::string messages[CONTACT_INFO_COUNT];

		// Functions
		bool	isAllNumber(std::string string);
		void	fillMessages();

	public:
		Contact();
		~Contact();

		static const int MODE_ALL = 0, MODE_BEGIN_INFO = 1;

		void	fillContact();
		void	displayContact(int index, int mode);
};


#endif
