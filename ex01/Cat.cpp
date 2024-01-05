/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 16:36:08 by amaligno          #+#    #+#             */
/*   Updated: 2024/01/05 17:41:12 by amaligno         ###   ########.fr       */
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
	this->_brain = new Brain();
    cout << this->Type << " constructor called" << '\n';
}

Cat::Cat(Cat const &cpy)
{
    this->_brain = new Brain(cpy.getBrain());
    cout << "Cat copy constructor called";
}

Cat::~Cat()
{
	delete this->_brain;
    cout << this->Type << " destructor Called" << '\n';
}

void   Cat::makeSound(void) const
{
    cout << "Meow" << '\n';
}

const Brain		&Cat::getBrain(void) const
{
	return (*this->_brain);
}

Cat	&Cat::operator=(Cat const &cpy)
{
	if (this != &cpy)
	{
		this->Type = cpy.getType();
	
		delete this->_brain;
    	this->_brain = new Brain(cpy.getBrain());
	}
	return *this;
}