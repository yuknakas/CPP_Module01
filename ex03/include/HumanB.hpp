/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 20:35:44 by yuknakas          #+#    #+#             */
/*   Updated: 2026/01/02 20:41:24 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

// ************************************************************************** //
//                               HumanB Class                                 //
// ************************************************************************** //

class HumanB
{
public:
	// constructor + destructor
	HumanB( std::string name );
	~HumanB();
	// getter
	// setter
	// memeber functions
	void	setWeapon( Weapon &new_weapon );
	void	attack( void )const;

private:
	std::string	m_name;		// name of HumanB
	Weapon		*m_weapon;	// reference to weapon
};

#endif
