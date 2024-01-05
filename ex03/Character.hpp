/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 20:29:33 by amaligno          #+#    #+#             */
/*   Updated: 2024/01/05 21:05:08 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"

class Character: public ICharacter
{
	private:
		std::string	_name;
		AMateria	*_inventory[4];
		//Variable to keep last dropped item for easier deleting
		AMateria	*_floor;
	public:
		//Contructors
			Character(std::string name);
		//Destructor
			~Character();
		//Getter
			AMateria	*getFloor(void) const;
			std::string const &getName(void) const;
		//Methods
			void equip(AMateria* m);
			void unequip(int idx);
			void use(int idx, ICharacter& target);
};

#endif