/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 15:24:58 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/09 11:06:09 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

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