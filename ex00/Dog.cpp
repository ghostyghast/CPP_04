/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <antoinemalignon@yahoo.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 16:26:29 by amaligno          #+#    #+#             */
/*   Updated: 2024/01/01 17:37:57 by amaligno         ###   ########.fr       */
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