/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <antoinemalignon@yahoo.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 21:25:16 by amaligno          #+#    #+#             */
/*   Updated: 2024/01/03 01:37:46 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria	*_knowledge[4];
	public:
		//Constructor
			MateriaSource();
		//Destructor
			~MateriaSource();
		//Methods
			void		learnMateria(AMateria *);
			AMateria	*createMateria(std::string const &type);

};



#endif