/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <antoinemalignon@yahoo.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 20:30:21 by amaligno          #+#    #+#             */
/*   Updated: 2024/01/03 01:41:04 by amaligno         ###   ########.fr       */
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
		this->_inventory[0] = NULL;
	cout << "Concrete character constructor called" << '\n';
}

Character::~Character()
{
	cout << "Concrete character destructor called" << '\n';
}

const string	&Character::getName(void) const
{
	return (this->_name);
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
	if (this->_inventory[idx] && (idx < 0 || idx >= 4))
		this->_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	if (!this->_inventory[idx])
		return ;
	this->_inventory[idx]->use(target);
}
