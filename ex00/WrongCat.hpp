/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <antoinemalignon@yahoo.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 16:27:48 by amaligno          #+#    #+#             */
/*   Updated: 2024/01/01 16:57:49 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCAT_HPP
# define WrongCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal{
    public:
        //Constructor
            WrongCat();
        //Destructor
            ~WrongCat();
        void    makeSound(void) const;
};

#endif