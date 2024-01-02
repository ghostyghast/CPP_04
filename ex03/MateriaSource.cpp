/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <antoinemalignon@yahoo.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 21:24:58 by amaligno          #+#    #+#             */
/*   Updated: 2024/01/03 01:43:29 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>
using std::cout;
using std::string;

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_knowledge[i] = NULL;
	cout << "Materia constructor called" << '\n';	
}

MateriaSource::~MateriaSource()
{
	cout << "Materia destructor called" << '\n';	
}

void	MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if(!this->_knowledge[i])
		{
			this->_knowledge[i] = m;
			break ;
		}
	}	
}

AMateria	*MateriaSource::createMateria(string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_knowledge[i]->getType() == type)
			return (this->_knowledge[i]->clone());
	}
	cout << "Type unknown" << '\n';
	return (0);	
}