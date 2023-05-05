/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 19:33:21 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/05/05 20:21:24 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <vector>

template <typename T>
int	easyfind(T &container, int n)
{
	typename T::iterator	it;

	try
	{
		it = std::find(container.begin(), container.end(), n);
		if (it == container.end())
			throw (-1);
	}
	catch (int error)
	{
		std::cout << "Not found" << std::endl;
		return (error);
	}
	return (std::distance(container.begin(), it));
}

#endif
