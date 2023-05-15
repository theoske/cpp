/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:00:00 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/05/15 16:27:48 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

int	main()
{
	Data* data = new Data();
	
	uintptr_t raw = Serializer::serialize(data);
	Data* data2 = Serializer::deserialize(raw);
	
	std::cout << "Data2: " << data2 << std::endl;
	std::cout << "Data: " << data << std::endl;
	return (0);
}