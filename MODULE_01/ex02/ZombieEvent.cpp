/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 15:25:12 by fjimenez          #+#    #+#             */
/*   Updated: 2020/06/23 16:09:13 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string type)
{
    _setType = type;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
    Zombie *n_zombie;

    n_zombie = new Zombie;
    n_zombie->_name = name;
    n_zombie->_type = _setType;
    return (n_zombie);
}

void    ZombieEvent::announce(std::string name)
{
    std::cout << "Hello!! I´m a zombie my name is " << name << std::endl;
}

void	ZombieEvent::randomChump(void)
{
	Zombie	random;
	std::string	names[10] = {"Kratos", "Mario", "Sonic", "Nathan", "Geralt",
						"Gordon", "Freeman", "Trevor", "Wario", "Link"};

	random._name = names[rand() % 10];
	announce(random._name);
}

ZombieEvent::ZombieEvent(void)
{
	srand(time(0));
}
