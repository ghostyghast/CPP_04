/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <antoinemalignon@yahoo.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 16:23:42 by amaligno          #+#    #+#             */
/*   Updated: 2024/01/01 17:37:06 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>
using std::cout;
using std::string;

WrongAnimal::WrongAnimal(): Type("None")
{
    cout << "WrongAnimal Constructor Called" << '\n';
}

WrongAnimal::~WrongAnimal()
{
    cout << "WrongAnimal Destructor Called" << '\n';
}

string  WrongAnimal::getType(void) const
{
    return(this->Type);
}

void    WrongAnimal::setType(string Type)
{
    this->Type = Type;
}

void	WrongAnimal::makeSound(void) const
{
	cout << "i am animal yes noise" << '\n';
}