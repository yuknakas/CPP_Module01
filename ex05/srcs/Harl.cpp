/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 01:02:57 by yuknakas          #+#    #+#             */
/*   Updated: 2026/01/04 13:08:42 by yuknakas         ###   ########.fr       */
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
	std::cout << "[DEBUG]\n" << STR_DEBUG << std::endl;
}

void	Harl::info( void )
{
	std::cout << "[INFO]\n" << STR_INFO << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "[WARNING]\n" << STR_WARNING << std::endl;
}

void	Harl::error( void )
{
	std::cout << "[ERROR]\n" << STR_ERROR << std::endl;
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
		if (levels[i].compare(level.c_str()))
			return ((this->*p_memberFUNC[i])());
		i++;
	}
	std::cout << "Harl: Error Command " << level << " not found" << std::endl;
	return ;
}
