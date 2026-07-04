/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 01:02:57 by yuknakas          #+#    #+#             */
/*   Updated: 2026/07/04 14:13:46 by yuknakas         ###   ########.fr       */
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
	std::cout << GREEN << "[ INFO ]\n" << STR_INFO << RESET << std::endl;
}

void	Harl::warning( void )
{
	std::cout << GREEN << "[ WARNING ]\n" << STR_WARNING << RESET << std::endl;
}

void	Harl::error( void )
{
	std::cout << GREEN << "[ ERROR ]\n" << STR_ERROR << RESET << std::endl;
}

void	Harl::complain( std::string level )
{
	void		(Harl::*p_memberFUNC[])(void) =
		{
			&Harl::debug,
			&Harl::info,
			&Harl::warning,
			&Harl::error
		};
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i;

	i = 0;
	while (i < 4)
	{
		if (!levels[i].compare(level.c_str()))
			return ((this->*p_memberFUNC[i])());
		i++;
	}
	std::cout << RED << "Harl: Error Command " << level
	<< " not found" << RESET << std::endl;
	return ;
}
