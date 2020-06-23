/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 16:45:43 by fjimenez          #+#    #+#             */
/*   Updated: 2020/06/23 17:44:56 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int	main(void)
{
	ZombieHorde	*s_zombie;

	s_zombie = new ZombieHorde(8);
	s_zombie->announce();
	delete s_zombie;
    std::cout << std::endl;
	s_zombie = new ZombieHorde(2);
	s_zombie->announce();
	delete s_zombie;

	return (0);
}