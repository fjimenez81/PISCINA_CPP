/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 16:44:01 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/09 11:23:02 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::~ZombieHorde()
{
	 std::cout << "The horde has been destroyed!" << std::endl;
	delete [] _zombies;
}

void	ZombieHorde::announce(void)
{
	int	i;

	for (i = 0 ; i < _num ; i++)
		_zombies[i].announce();
}

ZombieHorde::ZombieHorde(int n)
{
	int		i;
	std::string	names[10] = {"Kratos", "Mario", "Sonic", "Nathan", "Geralt",
						"Gordon", "Freeman", "Trevor", "Wario", "Link"};

	srand(time(0));
	_zombies = new Zombie[n];
	_num = n;
	for (i = 0 ; i < n ; i++)
	{
		_zombies[i]._name = names[rand() % 10];
		_zombies[i]._type = "COMETRIPAS";
	}
}