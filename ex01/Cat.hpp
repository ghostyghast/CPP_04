/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 16:27:48 by amaligno          #+#    #+#             */
/*   Updated: 2024/01/05 16:53:37 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal{
	private:
		Brain *_brain;
    public:
        //Constructors
            Cat();
			Cat(Cat const &cpy);
        //Destructor
            ~Cat();
		//Getter
			const Brain	&getBrain() const;
        //Methods
			void    makeSound(void) const;
		//Operator overloads
			Cat		&operator=(Cat const &cpy);
};

#endif