/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 15:25:12 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/09 11:04:11 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
	srand(time(0));
}

ZombieEvent::ZombieEvent(std::string type): _setType(type) {}

void	ZombieEvent::setZombieType(std::string type)
{
    _setType = type;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
    Zombie *n_zombie;

    n_zombie = new Zombie(name, _setType);
    return (n_zombie);
}

void	ZombieEvent::randomChump(void)
{
	Zombie	*random;
	std::string	names[10] = {"Kratos", "Mario", "Sonic", "Nathan", "Geralt",
						"Gordon", "Freeman", "Trevor", "Wario", "Link"};

	random = this->newZombie(names[rand() % 10]);
	random->announce();
    delete(random);
}
