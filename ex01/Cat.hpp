/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <antoinemalignon@yahoo.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 16:27:48 by amaligno          #+#    #+#             */
/*   Updated: 2024/01/01 19:55:11 by amaligno         ###   ########.fr       */
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
			Brain	&getBrain() const;
        void    makeSound(void) const;
};

#endif