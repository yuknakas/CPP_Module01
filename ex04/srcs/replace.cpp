/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 00:26:11 by yuknakas          #+#    #+#             */
/*   Updated: 2026/01/04 00:37:56 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/replace.hpp"

std::string	replace( std::string buff, const std::string target, const std::string sub )
{
	size_t	pos;
	
	pos = buff.find(target);
	while (pos != std::string::npos)
	{
		buff.erase(pos, target.length());
		buff.insert(pos, sub);
		pos = buff.find(target, pos + sub.size());
	}
	return (buff);
}
