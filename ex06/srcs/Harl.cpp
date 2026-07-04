/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 01:02:57 by yuknakas          #+#    #+#             */
/*   Updated: 2026/07/04 14:19:59 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::debug( void )
{
	std::cout << GREEN << "[ DEBUG ]\n" << STR_DEBUG << RESET << std::endl;
}

void	Harl::info( void )
{
	std::cout << RED << "[ INFO ]\n" << STR_INFO << RESET << std::endl;
}

void	Harl::warning( void )
{
	std::cout << GREEN << "[ WARNING ]\n" << STR_WARNING << RESET << std::endl;
}

void	Harl::error( void )
{
	std::cout << RED << "[ ERROR ]\n" << STR_ERROR << RESET << std::endl;
}

void	Harl::complainFilter( std::string level )
{
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i;

	i = 0;
	while (i < 4)
	{
		if (!levels[i].compare(level.c_str()))
			break ;
		i++;
	}
	switch (i)
	{
		case (0):
			this->debug();
			__attribute__ ((fallthrough));
		case (1):
			this->info();
			__attribute__ ((fallthrough));
		case (2):
			this->warning();
			__attribute__ ((fallthrough));
		case (3):
			this->error();
			break ;

		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
	return ;
}
