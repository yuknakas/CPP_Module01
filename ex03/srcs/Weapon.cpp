/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 17:02:50 by yuknakas          #+#    #+#             */
/*   Updated: 2026/01/02 17:25:44 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"

Weapon::Weapon( const std::string new_type ): m_type(new_type)
{
}

Weapon::~Weapon()
{
}

std::string	Weapon::getType( void )const
{
	return (this->m_type);
}

void	Weapon::setType( const std::string new_type )
{
	this->m_type = new_type;
}
