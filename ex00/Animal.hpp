/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 16:19:37 by amaligno          #+#    #+#             */
/*   Updated: 2024/01/05 17:32:35 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string>

class   Animal{
	protected:
        std::string	Type;
	public:
		//Constructor
			Animal();
			Animal(Animal &cpy);
		//Destructor
			virtual	~Animal();
		//Operator overload
			Animal			&operator=(Animal const &cpy);
		//Getter
			std::string getType(void) const;
		//Setter
			void        setType(std::string Type);
		//Methods
			virtual void    makeSound(void) const;
};

#endif