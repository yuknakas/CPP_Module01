/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombiehHorde.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 18:34:41 by yuknakas          #+#    #+#             */
/*   Updated: 2025/11/30 18:40:26 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie	*Zombie::zombieHorde( int N, std::string name )
{
	Zombie	*horde;
	int		i;
	
	horde = NULL;
	if (N <= 0)
		return (horde);
	horde = new Zombie[N];
	i = 0;
	while (i < N)
	{
		horde[i]._name = name;
		i++;
	}
	return (horde);
}
