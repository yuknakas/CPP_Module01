/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 13:29:06 by yuknakas          #+#    #+#             */
/*   Updated: 2025/11/30 18:09:34 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iomanip>

// ************************************************************************** //
//                               Zombie Class                                //
// ************************************************************************** //

class Zombie
{
private:
	std::string	_name;
public:
	Zombie( std::string name );
	~Zombie( void );
	
	void	annouce( void );
	Zombie	*newZombie( std::string name );
	void	randomChump( std::string name );
};

# define CRY "BraiiiiiiinnnzzzZ..."

#endif