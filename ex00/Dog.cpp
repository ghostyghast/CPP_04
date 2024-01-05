/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 16:26:29 by amaligno          #+#    #+#             */
/*   Updated: 2024/01/05 17:28:18 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>
using std::cout;

Dog::Dog()
{
    this->Type = "Dog";
    cout << this->Type << " constructor called" << '\n';
}

Dog::~Dog()
{
    cout << this->Type << " destructor Called" << '\n';
}

void    Dog::makeSound(void) const
{
    cout << "Woof" << '\n';
}

Animal	&Animal::operator=(Animal const &cpy)
{
	if (this != &cpy)
		this->Type = cpy.getType();
	return *this;
}