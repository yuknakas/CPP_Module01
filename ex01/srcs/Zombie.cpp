/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 13:34:49 by yuknakas          #+#    #+#             */
/*   Updated: 2026/07/04 13:54:15 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/Zombie.hpp"

Zombie::Zombie( void )
{
}

Zombie::~Zombie()
{
	std::cout << "Deconstructer Called for " << this->_name << std::endl;
}

void	Zombie::annouce( void )
{
	std::cout << this->_name << ": " << CRY << std::endl;
}

