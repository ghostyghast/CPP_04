/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <antoinemalignon@yahoo.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 16:19:37 by amaligno          #+#    #+#             */
/*   Updated: 2024/01/01 17:12:13 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <string>

class   WrongAnimal{
	protected:
        std::string	Type;
	public:
		//Constructors
			WrongAnimal();
			WrongAnimal(WrongAnimal &cpy);
		//Destructor
			virtual	~WrongAnimal();
		//Operator overloads
			WrongAnimal	&operator=(WrongAnimal const &cpy);
		//Getter
			std::string getType(void) const;
		//Setter
			void        setType(std::string Type);
		//Methods
			void    makeSound(void) const;
};

#endif