/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <antoinemalignon@yahoo.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 16:36:08 by amaligno          #+#    #+#             */
/*   Updated: 2024/01/01 18:13:23 by amaligno         ###   ########.fr       */
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

Cat::~Cat()
{
    cout << this->Type << " destructor Called" << '\n';
}

void   Cat::makeSound(void) const
{
    cout << "Meow" << '\n';
}