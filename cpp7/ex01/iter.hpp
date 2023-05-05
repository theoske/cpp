/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:30:37 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/05/05 18:26:28 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template <typename T>
void	iter(T *a, int b, void (*fun)(T t))
{
	int	i = 0;

	while (i < b)
	{
		fun(a[i]);
		i++;
	}
	return ;
}

template <typename T>
void	print(T t)
{
	std::cout << t << std::endl;
}

#endif