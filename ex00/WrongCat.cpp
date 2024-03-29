/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <antoinemalignon@yahoo.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 16:36:08 by amaligno          #+#    #+#             */
/*   Updated: 2024/01/01 18:37:25 by amaligno         ###   ########.fr       */
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
#include "WrongCat.hpp"
#include <iostream>
using std::cout;

WrongCat::WrongCat()
{
    this->Type = "WrongCat";
    cout << this->Type << " constructor called" << '\n';
}

WrongCat::~WrongCat()
{
    cout << this->Type << " destructor Called" << '\n';
}

void   WrongCat::makeSound(void) const
{
    cout << "hello human : - ) i am Wrongcat" << '\n';
}

#endif 