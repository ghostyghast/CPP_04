/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 20:30:21 by amaligno          #+#    #+#             */
/*   Updated: 2024/01/05 21:07:37 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>
using std::cout;
using std::string;

Character::Character(std::string name)
{
	this->_name = name;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	cout << "Concrete character constructor called" << '\n';
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
	cout << "Concrete character destructor called" << '\n';
}

const string	&Character::getName(void) const
{
	return (this->_name);
}

AMateria	*Character::getFloor(void) const
{
	return (this->_floor);
}

void	Character::equip(AMateria *m)
{
	for(int i = 0; i < 4; i++)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			break ;
		}
	}
}

void	Character::unequip(int idx)
{
	if ((idx >= 0 && idx < 4) && this->_inventory[idx])
	{
		this->_floor = this->_inventory[idx];
		this->_inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if ((idx < 0 || idx >= 4) || !this->_inventory[idx])
		return ;
	this->_inventory[idx]->use(target);
}
