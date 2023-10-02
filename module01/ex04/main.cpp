#include "MyFile.hpp"

int main (int argc, char **argv)
{

	if (argc != 4)
	{
		std::cout << "Invalid argument count!\n";
		return (1);
	}
	MyFile file(*(argv + 1), *(argv + 2), *(argv + 3));
}
