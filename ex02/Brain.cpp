/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 19:00:20 by amaligno          #+#    #+#             */
/*   Updated: 2024/01/02 17:21:29 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
using std::cout;

Brain::Brain()
{
	for (int i  = 0; i < 100; i++)
		this->ideas[i] = "Incredible thought";
	cout << "Brain constructor has been called, good for you, you've needed one for a while" << '\n';
}

Brain::Brain(Brain const &cpy)
{
	*this = cpy;
	cout << "Brain copy constructor called, you couldn't be orignal could you" << '\n';
}

Brain::~Brain()
{
	cout << "Brain destructor has been called, welp back to the status quo" << '\n';
}

const std::string	*Brain::getIdeas(void) const
{
	return (this->ideas);
}

void	Brain::printBrain(void) const
{
	for(int i = 0; i < 100; i++)
		cout << this->ideas[i] << '\n';
}