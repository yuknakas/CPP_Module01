/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 20:37:02 by yuknakas          #+#    #+#             */
/*   Updated: 2026/01/02 20:49:40 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"

HumanB::HumanB( std::string name ): m_name(name)
{
	this->m_weapon = NULL;
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon( Weapon &new_weapon )
{
	this->m_weapon = &new_weapon;
	return ;
}

void	HumanB::attack( void )const
{
	if (!this->m_weapon)
	{
		std::cout << this->m_name << " attacks with their firsts" << this->m_name << std::endl;
		return ;
	}
	std::cout << this->m_name << " attacks with their " << this->m_weapon->getType() << std::endl;
	return ;
}
