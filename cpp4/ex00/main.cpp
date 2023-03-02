/* ************************************************************************** */
/*    */
/*:::      ::::::::   */
/*   main.cpp   :+:      :+:    :+:   */
/*    +:+ +:+ +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>  +#+  +:+       +#+*/
/*+#+#+#+#+#+   +#+   */
/*   Created: 2023/03/01 14:55:40 by tkempf-e  #+#    #+#     */
/*   Updated: 2023/03/02 16:22:01 by tkempf-e ###   ########.fr       */
/*    */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

//mauvais son et pas de wrongAnimal

int main()
{
	// const Animal* meta = new Animal();
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound(); //will output the cat sound!
	// j->makeSound();
	// meta->makeSound();
	// delete meta;
	// delete j;
	// delete i;
	// return 0;

	const WrongAnimal *meta = new WrongAnimal();
	const WrongAnimal *i = new WrongCat();
	std::cout << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	meta->makeSound();
	std::cout << std::endl;
	delete meta;
	delete i;
	std::cout << std::endl;
	return 0;
}