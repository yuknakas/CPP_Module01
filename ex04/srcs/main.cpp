/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 00:01:56 by yuknakas          #+#    #+#             */
/*   Updated: 2026/01/04 00:40:49 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/replace.hpp"

// main takes arguments as follows: ./replace <filename> <string1> <string2>
int	main( int argc, char **argv )
{
	std::string		filename;
	std::string		s1;
	std::string		s2;
	std::string		buff;
	std::ifstream	InFile;
	std::ofstream	OutFile;

	// error handeling when incorrect number of arguments
	if (argc != 4)
	{
		std::cout << "err replace: Wrong Number of Arguments.\n"
		<< "Usage: ./replace <filename> <string1> <string2>" << std::endl;
		return (1);
	}

	// setting up arguments as a string variable
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	
	// opening file and checking if the file exists/opens
	InFile.open(filename, std::ios::in);
	if (!InFile.is_open())
	{
		std::cout << "err replace: error with opening " << filename << std::endl;
		return (1);
	}

	// preparing an outfile
	OutFile.open((filename + ".replace"), std::ios::out | std::ios::trunc);
	if (!OutFile.is_open())
	{
		std::cout << "err replace: error with opening outfile (" << filename << ".replace)" << std::endl;
		InFile.close();
		return (1);
	}

	// loop to read->replace->write
	while (std::getline(InFile, buff)) // getline returns ref to input stream, which would be false (bool) if EOF or failure
	{
		buff = replace(buff, s1, s2);
		OutFile << buff << "\n";
	}
	InFile.close();
	OutFile.close();
	return (0);
}
