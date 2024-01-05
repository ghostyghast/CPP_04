/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 20:28:15 by amaligno          #+#    #+#             */
/*   Updated: 2024/01/05 20:14:09 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>
using std::string;
using std::cout;

AMateria::AMateria(void)
{
	this->_type = "None";
	cout << "AMateria default constructor called" << '\n';
}

AMateria::AMateria(string const &type)
{
	this->_type = type;
	cout << "AMateria string constructor called" << '\n';
}

AMateria::AMateria(AMateria const &cpy)
{
	*this = cpy;
	cout << "AMateria copy constructor called" << '\n';
}

AMateria::~AMateria()
{
	cout << "AMateria destructor called" << '\n';
}

AMateria	&AMateria::operator=(AMateria const &cpy)
{
	(void)cpy;
	return (*this);	
}

const string	&AMateria::getType() const
{
	return(this->_type);
}

void	AMateria::use(ICharacter &target)
{
	cout << "AMateria is somehow used on " << target.getName() << '\n';
}