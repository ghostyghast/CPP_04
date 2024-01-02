/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 16:19:19 by amaligno          #+#    #+#             */
/*   Updated: 2024/01/02 17:51:48 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>
#include <stdlib.h>
using std::cout;


int main()
{
const AAnimal* j = new Dog();
const AAnimal* i = new Cat();

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

//Array of AAnimals
const AAnimal *AAnimals[4];

for (int i = 0; i < 2; i++)
	AAnimals[i] = new Dog();

for (int i = 2; i < 4; i++)
	AAnimals[i] = new Cat();

for (int i = 0; i < 4; i++)
	delete AAnimals[i];

// system("leaks polymorphism");

return 0;
}