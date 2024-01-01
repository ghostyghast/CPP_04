/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <antoinemalignon@yahoo.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 19:00:20 by amaligno          #+#    #+#             */
/*   Updated: 2024/01/01 19:22:46 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
using std::cout;

Brain::Brain()
{
	cout << "Brain constructor has been called, good for you, you've needed one for a while" << '\n';
}

Brain::~Brain()
{
	cout << "Brain destructor has been called, welp back to the status quo" << '\n';
}