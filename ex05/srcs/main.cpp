/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 13:09:00 by yuknakas          #+#    #+#             */
/*   Updated: 2026/01/04 13:17:36 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "../include/Harl.hpp"

int main( void )
{
	Harl		harl;
	std::string buff;

	// showing what Harl is able to say
	std::cout << "Here is all Harl can say:" << std::endl;
	harl.complain("DEBUG");
	std::cout << std::endl;
	harl.complain("INFO");
	std::cout << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl;
	harl.complain("ERROR");
	std::cout << std::endl;

	// accept user input
	while (1)
	{
		std::cout << "Now Harl is accepting user input.\n" 
		<< "To use Harl, all letters must be in CAPS. Use \"EXIT\" to quit" << std::endl;
		std::getline(std::cin, buff);
		if (buff.compare("EXIT"))
			break;
		harl.complain(buff);
		std::cout << std::endl;
	}
	
	return (0);
}
