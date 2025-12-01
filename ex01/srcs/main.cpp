/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 18:11:14 by yuknakas          #+#    #+#             */
/*   Updated: 2025/11/30 18:46:19 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/Zombie.hpp"

int	main( void )
{
	Zombie	*hoard;
	int		i;
	int		count;

	hoard = NULL;
	count = 10;
	hoard = hoard->zombieHorde(count, "Yuki");
	i = 0;
	while (i < count)
	{
		std::cout << "Zombie " << i << ":";
		hoard[i].annouce();
		i++;
	}
	i = 0;
	delete [] hoard;
	
	return (0);
}
