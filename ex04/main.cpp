/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 21:43:13 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/15 23:51:52 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "INVALID NUMBER OF ARGUMENTS" << std::endl;
		std::cerr << "Usage: ./replace <filename> <string1> <string2>" << std::endl;
		return (1);
	}
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];

	if (s1.empty())
	{
		std::cerr << "Error: string to replace cannot be empty!" << std::endl;
		return (1);
	}

	std::ifstream inFile(filename);
	if (!inFile.is_open())
	{
		std::cerr << "Error: Cannot open file: " << filename << std::endl;
		return (1);
	}


	std::string outfilename = filename + ".replace";
	std::ofstream outFile(outfilename);
	if (!outFile.is_open())
	{
		std::cerr << "Error: Cannot create file: " << outfilename << std::endl;
		inFile.close();
		return (1);
	}

	bool found =false;
	std::string line;

	while (std::getline(inFile, line))
	{
		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			found = true;
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		outFile << line;
		if (!inFile.eof())
			outFile << std::endl;
	}
	inFile.close();
	outFile.close();
	if (!found)
	{
		std::cerr << "Error: String '" << s1 << "' not found in file" << std::endl;
		return (1);
	}
	return (0);
}
