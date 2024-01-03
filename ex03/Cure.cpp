/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 01:23:54 by amaligno          #+#    #+#             */
/*   Updated: 2024/01/03 15:48:27 by amaligno         ###   ########.fr       */
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

AMateria	*Cure::clone(void) const
{
	return(new Cure());
}

void		Cure::use(ICharacter &target)
{
	cout << "* Heals " << target.getName() << "'s wounds *\n";
}
