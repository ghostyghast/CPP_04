/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 16:36:08 by amaligno          #+#    #+#             */
/*   Updated: 2024/01/05 16:55:36 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <antoinemalignon@yahoo.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 16:26:29 by amaligno          #+#    #+#             */
/*   Updated: 2024/01/01 16:35:53 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>
using std::cout;

Cat::Cat()
{
    this->Type = "Cat";
    cout << this->Type << " constructor called" << '\n';
}

Cat::Cat(Cat &cpy)
{
	*this = cpy;
}

Cat::~Cat()
{
    cout << this->Type << " destructor Called" << '\n';
}

void   Cat::makeSound(void) const
{
    cout << "Meow" << '\n';
}

Cat	&Cat::operator=(Cat const &cpy)
{
	if (this != &cpy)
		this->Type = cpy.getType();
	return *this;
}