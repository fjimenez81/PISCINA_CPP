/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 18:16:49 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/02 12:41:40 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack(void)
{
	std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}

void	HumanA::setWeapon(Weapon weapon)
{
	_weapon = weapon;
}

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon) {}