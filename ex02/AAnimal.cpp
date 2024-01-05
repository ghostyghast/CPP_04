/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <antoinemalignon@yahoo.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 16:23:42 by amaligno          #+#    #+#             */
/*   Updated: 2024/01/01 17:37:06 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>
using std::cout;
using std::string;

AAnimal::AAnimal(): Type("None")
{
    cout << "AAnimal Constructor Called" << '\n';
}

AAnimal::AAnimal(AAnimal const &cpy)
{
	*this = cpy;
}

AAnimal::~AAnimal()
{
    cout << "AAnimal Destructor Called" << '\n';
}

AAnimal	&AAnimal::operator=(AAnimal const &cpy)
{
	if (this != &cpy)
		*this = cpy;
	return *this;
}

string  AAnimal::getType(void) const
{
    return(this->Type);
}

void    AAnimal::setType(string Type)
{
    this->Type = Type;
}