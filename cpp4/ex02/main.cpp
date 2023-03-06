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

int main()
{
	Animal  *array[10];
	
    for (size_t i = 0; i < 5; i++)
    {
        array[i] = new Dog();
        std::cout << std::endl;
        array[i]->makeSound();
        std::cout << std::endl;
    }
	
    std::cout << std::endl;
	
    for (size_t i = 5; i < 10; i++)
    {
        array[i] = new Cat();
        std::cout << std::endl;
        array[i]->makeSound();
        std::cout << std::endl;
    }
	
    for (size_t i = 0; i < 10; i++)
        delete array[i];

    return (0);
}