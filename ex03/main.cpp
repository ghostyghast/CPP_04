/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 18:04:01 by amaligno          #+#    #+#             */
/*   Updated: 2024/01/05 21:09:25 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <iostream>
#include <stdlib.h>
using std::cout;

void	test1()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	
}

void	test2()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	
	AMateria *tmp = new Ice();
	src->learnMateria(tmp);
	delete tmp;

	ICharacter *me = new Character("me");
	me->equip(src->createMateria("Ice"));
	me->use(0, *me);
	
	delete me;
	delete src;
}

void	test3()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	
	Character *player = new Character("player");
	ICharacter *guy = new Character("guy");
	cout << "-----try to create and use nothing------" << "\n\n";
	player->equip(src->createMateria("smth"));
	for (int i = 0; i < 4; i++)
		player->use(i, *guy);
	cout << "-----after use nothing-----" << "\n\n";
	player->equip(src->createMateria("cure"));
	player->equip(src->createMateria("cure"));
	player->equip(src->createMateria("cure"));
	player->equip(src->createMateria("cure"));
	
	AMateria	*tmp = src->createMateria("ice");
	player->equip(tmp);
	delete tmp;
	
	for (int i = 0; i < 4; i++)
		player->use(i, *guy);
	player->unequip(4);
	player->unequip(2);
	delete player->getFloor();
	cout << '\n';
	for (int i = 0; i < 4; i++)
		player->use(i, *guy);
	player->equip(src->createMateria("ice"));
	for (int i = 0; i < 4; i++)
		player->use(i, *guy);
	
	player->use(5, *guy);

	delete player;
	delete guy;
	delete src;
}

int main()
{
	// test1();
	// test2();
	test3();
	// system("leaks interface");
}
