/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <antoinemalignon@yahoo.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 16:19:37 by amaligno          #+#    #+#             */
/*   Updated: 2024/01/01 17:12:13 by amaligno         ###   ########.fr       */
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
		//Destructor
			virtual	~Animal();
		//Getter
			std::string getType(void) const;
		//Setter
			void        setType(std::string Type);
		virtual void    makeSound(void) const;
};

#endif