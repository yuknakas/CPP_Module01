/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 16:50:47 by yuknakas          #+#    #+#             */
/*   Updated: 2026/01/02 17:19:32 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

// ************************************************************************** //
//                               Weapon Class                                 //
// ************************************************************************** //

class Weapon
{
public:
	// constructer + destructor
	Weapon( const std::string new_type );
	~Weapon();
	// getter
	std::string getType( void )const;
	// setter
	void		setType( const std::string new_type );
	// memeber functions

private:
	std::string	m_type; // type of weapon, aka name of weapon
};

#endif
