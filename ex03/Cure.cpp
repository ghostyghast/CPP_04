/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <antoinemalignon@yahoo.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 01:23:54 by amaligno          #+#    #+#             */
/*   Updated: 2024/01/03 01:25:20 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>
using std::string;
using std::cout;

Cure::Cure(): AMateria("Cure")
{
}

Cure::Cure(AMateria const &cpy): AMateria(cpy)
{
}

Cure::~Cure(void)
{
}

AMateria	*Cure::clone(void) const
{
	return(new Cure());
}

void		Cure::use(ICharacter &target)
{
	cout << "* Heals " << target.getName() << "'s wounds *\n";
}
