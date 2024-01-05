/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 01:23:54 by amaligno          #+#    #+#             */
/*   Updated: 2024/01/05 20:08:26 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>
using std::string;
using std::cout;

Cure::Cure(): AMateria("cure")
{
	cout << "Cure constructor called" << '\n';
}

Cure::Cure(AMateria const &cpy): AMateria(cpy)
{
	cout << "Cure copy constructor called" << '\n';
}

Cure::~Cure(void)
{
	cout << "Cure destructor called" << '\n';
}

Cure	&Cure::operator=(Cure const &cpy)
{
	(void)cpy;
	return *this;
}

AMateria	*Cure::clone(void) const
{
	return(new Cure());
}

void		Cure::use(ICharacter &target)
{
	cout << "* Heals " << target.getName() << "'s wounds *\n";
}
