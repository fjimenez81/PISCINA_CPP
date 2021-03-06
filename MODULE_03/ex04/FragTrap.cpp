/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 16:36:52 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/11 12:28:09 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap ()
{
	std::cout << "<FR4G-TP> Fragtrap, starting bootup sequence!" << std::endl;
}

FragTrap::FragTrap(std::string const & name) : ClapTrap (100, 100, 100, 100, 1, 30, 20, 5, name, "<FR4G-TP>")
{
	std::cout << "<FR4G-TP> Fragtrap, starting bootup sequence!" << std::endl;
}

FragTrap::FragTrap(const FragTrap & src) : ClapTrap (src)
{
	std::cout << "<FR4G-TP> Fragtrap, copying memory board!" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "<FR4G-TP> Good thing I don't have a soul!" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap & src)
{
	_hp = src._hp;
	_max_hp = src._max_hp;
	_nrg = src._nrg;
	_max_nrg = src._max_nrg;
	_lvl = src._lvl;
	_melee_atk = src._melee_atk;
	_ranged_atk = src._ranged_atk;
	_dmg_reduc = src._dmg_reduc;
	_name = src._name;
	_type = src._type;
	return (*this);
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string	atks [5] = { "tiny death pellets", "snowball stash",
	"ultimate fire of destruction", "weak flick", "basic_combat_algorithm" };

	if (_nrg >= 25)
	{
		_nrg -= 25;
		std::cout << _type << " " << _name << " uses his ";
		std::cout << atks[rand() % 5] << " on " << target << "!" << std::endl;
	}
	else
		std::cout << _type << " " << _name << " is out of energy!" << std::endl;
}
