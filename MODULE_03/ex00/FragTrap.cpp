/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 15:29:31 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/22 12:21:02 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << _name << " attacks " << target;
	std::cout << " at range, causing " << _ranged_atk;
	std::cout << " points of damage!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << _name << " attacks " << target;
	std::cout << " at melee, causing " << _melee_atk;
	std::cout << " points of damage!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	amount -= _dmg_reduc;
	if (amount < 0)
		amount = 0;
	if (_hp < (int)amount)
		amount = _hp;
	_hp -= amount;
	std::cout << "FR4G-TP " << _name << " takes ";
	if (amount > 1)
		std::cout << amount << " points of damage!" << std::endl;
	else if (amount == 1)
		std::cout << "1 point of damage!" << std::endl;
	else
		std::cout << "no damage!" << std::endl;
	if (_hp == 0)
		std::cout << "FR4G-TP " << _name << "'s done for!" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (_hp + (int)amount > _max_hp)
		amount = _max_hp - _hp;
	_hp += amount;
	std::cout << "FR4G-TP " << _name << " heals ";
	if (amount > 1)
		std::cout << amount << " hit points!" << std::endl;
	else if (amount == 1)
		std::cout << "1 hit point!" << std::endl;
	else
		std::cout << "nothing!" << std::endl;
	if (_hp == 100)
		std::cout << "FR4G-TP " << _name << " is full health!" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string	atks [5] = { "tiny death pellets", "snowball stash",
	"ultimate fire of destruction", "weak flick", "basic_combat_algorithm" };

	if (_nrg >= 25)
	{
		_nrg -= 25;
		std::cout << "FR4G-TP " << _name << " uses his ";
		std::cout << atks[rand() % 5] << " on " << target << "!" << std::endl;
	}
	else
		std::cout << "FR4G-TP " << _name << " is out of energy!" << std::endl;
}

// Overloaders

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
	return (*this);
}

// Constructors and destructors

FragTrap::FragTrap(void)
{
	srand(time(0));
	std::cout << "Fragtrap, starting bootup sequence!" << std::endl;
	_hp = 100;
	_max_hp = 100;
	_nrg = 100;
	_max_nrg = 100;
	_lvl = 1;
	_melee_atk = 30;
	_ranged_atk = 20;
	_dmg_reduc = 5;
	_name = "KUBO";
}

FragTrap::FragTrap(std::string const & name)
{
	srand(time(0));
	std::cout << "Fragtrap, starting bootup sequence!" << std::endl;
	_hp = 100;
	_max_hp = 100;
	_nrg = 100;
	_max_nrg = 100;
	_lvl = 1;
	_melee_atk = 30;
	_ranged_atk = 20;
	_dmg_reduc = 5;
	_name = name;
}

FragTrap::FragTrap(const FragTrap & src)
{
	srand(time(0));
	std::cout << "Fragtrap, copying memory board!" << std::endl;
	_hp = src._hp;
	_max_hp = src._max_hp;
	_nrg = src._nrg;
	_max_nrg = src._max_nrg;
	_lvl = src._lvl;
	_melee_atk = src._melee_atk;
	_ranged_atk = src._ranged_atk;
	_dmg_reduc = src._dmg_reduc;
	_name = src._name;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Good thing I don't have a soul!" << std::endl;
}
