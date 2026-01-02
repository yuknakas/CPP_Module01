/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 17:20:42 by yuknakas          #+#    #+#             */
/*   Updated: 2026/01/02 20:49:43 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ): m_name(name), m_weapon(weapon)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack( void )const
{
	std::cout << this->m_name << " attacks with their " << this->m_weapon.getType() << std::endl;
	return ;
}
