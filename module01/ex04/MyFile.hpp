#pragma once
#ifndef __MYFILE_H__
#define __MYFILE_H__

#include <iostream>
#include <fstream>


class MyFile
{
private:
	std::ofstream write_file;
	std::ifstream read_file;
	std::string word1;
	std::string word2;

public:
	MyFile(std::string read_file, std::string word1, std::string word2);
	~MyFile();

	void	readFile(std::string file_name);
	void	writeFile(std::string file_name);
	void	setWords(std::string word1, std::string word2);
};

#endif
