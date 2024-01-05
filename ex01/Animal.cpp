/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 16:23:42 by amaligno          #+#    #+#             */
/*   Updated: 2024/01/05 16:49:24 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>
using std::cout;
using std::string;

Animal::Animal(): Type("None")
{
    cout << "Animal Constructor Called" << '\n';
}

Animal::~Animal()
{
    cout << "Animal Destructor Called" << '\n';
}

string  Animal::getType(void) const
{
    return(this->Type);
}

void    Animal::setType(string Type)
{
    this->Type = Type;
}

void	Animal::makeSound(void) const
{
	cout << "Animal noise." << '\n';
}

Animal	&Animal::operator=(Animal const &cpy)
{
	if (this != &cpy)
		this->Type = cpy.getType();
	return *this;
}