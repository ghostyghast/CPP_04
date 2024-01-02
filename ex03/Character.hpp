/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <antoinemalignon@yahoo.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 20:29:33 by amaligno          #+#    #+#             */
/*   Updated: 2024/01/03 01:03:00 by amaligno         ###   ########.fr       */
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
	public:
		//Contructors
			Character(std::string name);
		//Destructor
			~Character();
		//Getter
			std::string const &getName(void) const;
		//Methods
			void equip(AMateria* m);
			void unequip(int idx);
			void use(int idx, ICharacter& target);
};

#endif