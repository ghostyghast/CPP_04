/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 19:00:18 by amaligno          #+#    #+#             */
/*   Updated: 2024/01/02 16:17:37 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <string>

class Brain
{
	private:
		std::string	ideas[100];
	public:
		//Constructors
			Brain();
			Brain(Brain const &cpy);
		//Destructor
			~Brain();
		//Getter
			const std::string	*getIdeas(void) const;
		//Methods
			void	printBrain(void) const;
		
};

#endif