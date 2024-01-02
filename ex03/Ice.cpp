/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <antoinemalignon@yahoo.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 01:03:12 by amaligno          #+#    #+#             */
/*   Updated: 2024/01/03 01:22:23 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>
using std::string;
using std::cout;

Ice::Ice(): AMateria("ice")
{
}

Ice::Ice(AMateria const &cpy): AMateria(cpy)
{
}

Ice::~Ice(void)
{
}

AMateria	*Ice::clone(void) const
{
	return(new Ice());
}

void		Ice::use(ICharacter &target)
{
	cout << "*Shoots an ice bolt at " << target.getName() << " *\n";
}
