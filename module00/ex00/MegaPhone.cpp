#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	std::string	new_string;

	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	for (int i = 1; i < argc; i++)
	{
		new_string = "";
		while (*(argv[i]))
			new_string += toupper((*(argv[i])++));
		std::cout << new_string;
	}
	std::cout << std::endl;
}
