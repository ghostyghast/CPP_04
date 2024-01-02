/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 16:29:14 by amaligno          #+#    #+#             */
/*   Updated: 2024/01/02 16:23:35 by amaligno         ###   ########.fr       */
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
		//Methods
			const Brain	&getBrain(void) const;
        	void    	makeSound(void) const;
};

#endif