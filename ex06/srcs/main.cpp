/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 13:09:00 by yuknakas          #+#    #+#             */
/*   Updated: 2026/01/04 18:27:23 by yuknakas         ###   ########.fr       */
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
	std::cout << std::endl;
	harl.complainFilter("DEBUG");
	std::cout << std::endl;
	harl.complainFilter("INFO");
	std::cout << std::endl;
	harl.complainFilter("WARNING");
	std::cout << std::endl;
	harl.complainFilter("ERROR");
	std::cout << std::endl;

	// accept user input
	while (1)
	{
		std::cout << "Now Harl is accepting user input.\n" 
		<< "To use Harl, all letters must be in CAPS. Use \"EXIT\" to quit" << std::endl;
		std::getline(std::cin, buff);
		if (std::cin.eof())
			break;
		if (!buff.compare("EXIT"))
			break;
		harl.complainFilter(buff);
		std::cout << std::endl;
	}
	
	return (0);
}
