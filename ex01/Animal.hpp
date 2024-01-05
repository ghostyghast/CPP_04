/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 16:19:37 by amaligno          #+#    #+#             */
/*   Updated: 2024/01/05 16:51:23 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string>

class   Animal{
	protected:
        std::string	Type;
	public:
		//Constructors
			Animal();
			Animal(Animal &cpy);
		//Destructor
			virtual	~Animal();
		//Getter
			std::string getType(void) const;
		//Setter
			void        setType(std::string Type);
			virtual void    makeSound(void) const;
		//Operator overloads
			Animal	&operator=(Animal const &cpy);
};

#endif