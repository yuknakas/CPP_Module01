/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 18:11:14 by yuknakas          #+#    #+#             */
/*   Updated: 2025/11/30 18:15:19 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/Zombie.hpp"

int	main( void )
{
	Zombie	*myZombie;

	myZombie = myZombie->newZombie("Yuki");
	myZombie->annouce();
	myZombie->randomChump("Nayla");
	delete myZombie;
	myZombie->randomChump("Bob");
	myZombie = myZombie->newZombie("John");
	myZombie->annouce();
	delete myZombie;
	return (0);
}
