/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <antoinemalignon@yahoo.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 16:36:08 by amaligno          #+#    #+#             */
/*   Updated: 2024/01/01 18:08:20 by amaligno         ###   ########.fr       */
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

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
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
    cout << "hello human : - ) i am cat" << '\n';
}

#endif 