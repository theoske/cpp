/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 20:14:26 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/02/06 14:40:11 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl	harl;

	harl.complain("debug");
	sleep(2);
	harl.complain("info");
	sleep(2);
	harl.complain("warning");
	sleep(2);
	harl.complain("error");
	return (0);
}