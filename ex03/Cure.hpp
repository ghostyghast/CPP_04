/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <antoinemalignon@yahoo.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 01:24:18 by amaligno          #+#    #+#             */
/*   Updated: 2024/01/03 01:24:32 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cure_HPP
# define Cure_HPP
# include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		//Constructors 
			Cure();
			Cure(AMateria const &cpy);
		//Destructor
			~Cure(void);
		//Methods
			AMateria	*clone(void) const;
			void		use(ICharacter &target);
};


#endif