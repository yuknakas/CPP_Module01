/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 18:02:57 by yuknakas          #+#    #+#             */
/*   Updated: 2025/11/30 18:10:51 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <../include/Zombie.hpp>

Zombie	*Zombie::newZombie( std::string name )
{
	Zombie	*new_zombie;
	
	new_zombie = new Zombie(name);
	return (new_zombie);
}
