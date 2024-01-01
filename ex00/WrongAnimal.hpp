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
		//Constructor
			WrongAnimal();
		//Destructor
			virtual	~WrongAnimal();
		//Getter
			std::string getType(void) const;
		//Setter
			void        setType(std::string Type);
		void    makeSound(void) const;
};

#endif