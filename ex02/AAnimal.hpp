/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <antoinemalignon@yahoo.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 16:19:37 by amaligno          #+#    #+#             */
/*   Updated: 2024/01/01 17:12:13 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
# define AAnimal_HPP
# include <string>

class   AAnimal{
	protected:
        std::string	Type;
	public:
		//Constructor
			AAnimal();
		//Destructor
			virtual	~AAnimal();
		//Getter
			std::string getType(void) const;
		//Setter
			void        setType(std::string Type);
		virtual void    makeSound(void) const = 0;
};

#endif