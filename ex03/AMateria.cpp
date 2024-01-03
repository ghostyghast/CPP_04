/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 20:28:15 by amaligno          #+#    #+#             */
/*   Updated: 2024/01/03 13:54:32 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>
using std::string;
using std::cout;

AMateria::AMateria(void)
{
	this->_type = "None";
}

AMateria::AMateria(string const &type)
{
	this->_type = type;
	cout << "AMateria constructor called" << '\n';
}

AMateria::AMateria(AMateria const &cpy)
{
	*this = cpy;
}

const string	&AMateria::getType() const
{
	return(this->_type);
}

void	AMateria::use(ICharacter &target)
{
	cout << "AMateria is somehow used on " << target.getName() << '\n';
}