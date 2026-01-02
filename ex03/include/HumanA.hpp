/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 17:07:55 by yuknakas          #+#    #+#             */
/*   Updated: 2026/01/02 20:36:45 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

// ************************************************************************** //
//                               HumanA Class                                 //
// ************************************************************************** //

class HumanA
{
public:
	// constructor + destructor
	HumanA( std::string name, Weapon &weapon );
	~HumanA();
	// getter
	// setter
	// memeber functions
	void	attack( void )const;

private:
	std::string	m_name;		// name of HumanA
	Weapon		&m_weapon;	// reference to weapon
};

#endif
