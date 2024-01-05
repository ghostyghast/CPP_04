/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 16:26:29 by amaligno          #+#    #+#             */
/*   Updated: 2024/01/05 18:00:13 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>
using std::cout;

//Constructors
Dog::Dog()
{
    this->Type = "Dog";
	this->_brain = new Brain();
    cout << this->Type << " constructor called" << '\n';
}

//The copy constructor is a "deep copy", as it has its own brain
//and not just the one given from the copy
Dog::Dog(Dog const &cpy)
{
	*this = cpy;
	this->_brain = new Brain(cpy.getBrain());
	cout << "Dog copy constructor called" << '\n';
}

//Destructor
Dog::~Dog()
{
	delete this->_brain;
    cout << this->Type << " destructor Called" << '\n';
}

Dog	&Dog::operator=(Dog const &cpy)
{
	if (this != &cpy)
	{
		this->Type = cpy.getType();

		delete this->_brain;
		this->_brain = new Brain(cpy.getBrain());
	}
	
	return *this;
}

void    Dog::makeSound(void) const
{
    cout << "Woof" << '\n';
}

const Brain		&Dog::getBrain(void) const
{
	return (*this->_brain);
}