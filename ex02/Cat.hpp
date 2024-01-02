/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 16:27:48 by amaligno          #+#    #+#             */
/*   Updated: 2024/01/02 17:45:38 by amaligno         ###   ########.fr       */
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
		//Getter
			const Brain	&getBrain() const;
        //Methods
			void    makeSound(void) const;
};

#endif