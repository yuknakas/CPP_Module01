/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 20:19:16 by yuknakas          #+#    #+#             */
/*   Updated: 2026/01/02 16:41:25 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main( void )
{
	// declaring variables
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	// printing memeory address
	std::cout << "Memory address of string:    " << std::hex << &string << std::endl;
	std::cout << "Memory address of pointer:   " << std::hex << &stringPTR << std::endl;
	std::cout << "Memory address of reference: " << std::hex << &stringREF << std::endl;

	std::cout << std::endl;

	// printing vale
	std::cout << "Value of string:    " << string << std::endl;
	std::cout << "Value of pointer:   " << stringPTR << std::endl;
	std::cout << "Value of reference: " << stringREF << std::endl;

	return (0);
}
