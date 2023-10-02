#include "MyFile.hpp"

MyFile::MyFile(std::string read_file_name, std::string word1, std::string word2) {
	setWords(word1, word2);
	readFile(read_file_name);
	writeFile(read_file_name);
}

MyFile::~MyFile() {
	if (read_file.is_open()) read_file.close();
	if (write_file.is_open()) write_file.close();
}

void MyFile::setWords(std::string word1, std::string word2) {
	this->word1 = word1;
	this->word2 = word2;
}


void	MyFile::readFile(std::string file_name) {
	read_file.open(file_name);
	if (read_file.is_open() == false) std::cout << "Invalid File Path :(\n";
}

void	MyFile::writeFile(std::string file_name) {
	std::string line;
	int			replace_index;
	int			word1_len;

	if (read_file.is_open() == false) return ;
	word1_len = word1.length();
	write_file.open(file_name + ".replace");
	if (write_file.is_open() == false) {
		std::cout << "Unfourtunetly write file has not been created :(\n";
		return ;
	}
	while (std::getline(read_file, line))
	{
		replace_index = line.find(word1);
		while (replace_index != -1)
		{
			line.erase(replace_index, word1_len);
			line.insert(replace_index, word2);
			replace_index = line.find(word1);
		}
		write_file << line;
		write_file << "\n";
	}
}
