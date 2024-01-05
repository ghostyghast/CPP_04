/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 01:03:17 by amaligno          #+#    #+#             */
/*   Updated: 2024/01/05 20:04:54 by amaligno         ###   ########.fr       */
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
		//Operator overload
			Ice	&operator=(Ice const &cpy);
		//Destructor
			~Ice(void);
		//Methods
			AMateria	*clone(void) const;
			void		use(ICharacter &target);
};


#endif