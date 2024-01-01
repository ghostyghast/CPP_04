/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <antoinemalignon@yahoo.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 16:29:14 by amaligno          #+#    #+#             */
/*   Updated: 2024/01/01 19:28:26 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal{
	private:
		Brain	*_brain;
    public:
        //Construcor
            Dog();
            Dog(Dog const &cpy);
        //Destructor
            ~Dog();
        void    makeSound(void) const;
};

#endif