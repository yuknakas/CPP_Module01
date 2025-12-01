/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 18:08:56 by yuknakas          #+#    #+#             */
/*   Updated: 2025/11/30 18:11:12 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/Zombie.hpp"

void	Zombie::randomChump( std::string name )
{
	Zombie	new_zombie(name);
	new_zombie.annouce();
}
