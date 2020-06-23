/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 15:24:58 by fjimenez          #+#    #+#             */
/*   Updated: 2020/06/23 16:13:12 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main()
{
	ZombieEvent	h_zombie;
	Zombie		*zombie;

	h_zombie.setZombieType("COMETRIPAS");
	zombie = h_zombie.newZombie("PEDRITO");
	zombie->advert();
	delete zombie;
    std::cout << std::endl;
    h_zombie.setZombieType("COMECEREBROS");
	zombie = h_zombie.newZombie("JUANITO");
	zombie->advert();
	delete zombie;
	std::cout << std::endl;
	h_zombie.randomChump();
	h_zombie.randomChump();
	h_zombie.randomChump();
	h_zombie.randomChump();
	h_zombie.randomChump();
	return (0);
}