/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <antoinemalignon@yahoo.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 20:58:12 by amaligno          #+#    #+#             */
/*   Updated: 2024/01/03 01:37:33 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class IMateriaSource
{
	public:
			virtual ~IMateriaSource() {}
			virtual void learnMateria(AMateria *m) = 0;
			virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif