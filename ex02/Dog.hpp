/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 16:29:14 by amaligno          #+#    #+#             */
/*   Updated: 2024/01/05 17:55:06 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog: public AAnimal{
	private:
		Brain	*_brain;
    public:
        //Constructors
            Dog();
            Dog(Dog const &cpy);
        //Destructor
            ~Dog();
		//Operator overloads
			Dog	&operator=(Dog const &cpy);
		//Methods
			const Brain	&getBrain(void) const;
        	void    	makeSound(void) const;
};

#endif