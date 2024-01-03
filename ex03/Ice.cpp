/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 01:03:12 by amaligno          #+#    #+#             */
/*   Updated: 2024/01/03 15:46:41 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>
using std::string;
using std::cout;

Ice::Ice(): AMateria("ice")
{
	cout << "Ice constructor called" << '\n';
}

Ice::Ice(AMateria const &cpy): AMateria(cpy)
{
	cout << "Ice copy constructor called" << '\n';
}

Ice::~Ice(void)
{
	cout << "Ice destructor called" << '\n';
}

AMateria	*Ice::clone(void) const
{
	return(new Ice());
}

void		Ice::use(ICharacter &target)
{
	cout << "* Shoots an ice bolt at " << target.getName() << " *\n";
}
