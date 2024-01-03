/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 18:05:32 by amaligno          #+#    #+#             */
/*   Updated: 2024/01/03 14:32:40 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include "ICharacter.hpp"

class	ICharacter;

class AMateria
{
	protected:
		std::string	_type;
	public:
		//Constructors
			AMateria();
			AMateria(std::string const & type);
			AMateria(AMateria const &cpy);
		//Getter
			std::string const & getType() const; //Returns the materia type
		//Methods
			virtual AMateria* clone() const = 0;
			virtual void use(ICharacter& target);
};

#endif