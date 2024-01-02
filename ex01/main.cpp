/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 16:19:19 by amaligno          #+#    #+#             */
/*   Updated: 2024/01/02 17:40:27 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>
#include <stdlib.h>
using std::cout;


int main()
{
const Animal* j = new Dog();
const Animal* i = new Cat();

delete j;//should not create a leak
delete i;

//Deep copy proof! Each dog has their own allocated Brain with same contents
const Dog *f = new Dog();
const Dog *g = new Dog(*f);

cout << "----f Brain----\n";
// f->getBrain().printBrain();
cout << &f->getBrain() << '\n';
cout << "----g Brain----\n";
// g->getBrain().printBrain();
cout << &g->getBrain() << '\n';

delete f;
delete g;

// system("leaks polymorphism");

//Array of animals
const Animal *animals[4];

for (int i = 0; i < 2; i++)
	animals[i] = new Dog();

for (int i = 2; i < 4; i++)
	animals[i] = new Cat();

for (int i = 0; i < 4; i++)
	delete animals[i];

// system("leaks polymorphism");

return 0;
}