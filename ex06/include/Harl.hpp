/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 01:02:54 by yuknakas          #+#    #+#             */
/*   Updated: 2026/01/04 18:21:24 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

// ************************************************************************** //
//                               Harl Class                                   //
// ************************************************************************** //

class Harl
{
public:
	// constructor + destructor
	Harl();
	~Harl();
	// getter
	// setter
	// member func
	void	complainFilter( std::string level );

private:
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );
};

# define STR_DEBUG	"I love having extra bacon for my 7XL-double-cheese-triple-" \
					"pickle-special-ketchup burger.\nI really do!"
# define STR_INFO	"I cannot believe adding extra bacon costs more money.\n" \
					"You didn't put enough bacon in my burger!\n" \
					"If you did, I wouldn't be asking for more!"
# define STR_WARNING	" think I deserve to have some extra bacon for free.\n" \
						"I've been coming for years whereas you started\n" \
						"working here since last month."
# define STR_ERROR	"This is unacceptable!\nI want to speak to the manager now."

#endif
