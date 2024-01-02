/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <antoinemalignon@yahoo.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 01:03:17 by amaligno          #+#    #+#             */
/*   Updated: 2024/01/03 01:57:49 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		//Constructors 
			Ice();
			Ice(AMateria const &cpy);
		//Destructor
			~Ice(void);
		//Methods
			AMateria	*clone(void) const;
			void		use(ICharacter &target);
};


#endif