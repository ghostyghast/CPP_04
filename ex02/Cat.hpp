/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 16:27:48 by amaligno          #+#    #+#             */
/*   Updated: 2024/01/05 17:54:01 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat: public AAnimal{
	private:
		Brain *_brain;
    public:
        //Constructors
            Cat();
			Cat(Cat const &cpy);
        //Destructor
            ~Cat();
		//Operator overloads
			Cat	&operator=(Cat const &cpy);
		//Getter
			const Brain	&getBrain() const;
        //Methods
			void    makeSound(void) const;
};

#endif