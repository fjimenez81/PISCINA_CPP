/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 16:47:26 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/11 12:29:05 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void) : ClapTrap ()
{
	std::cout << "<N1NJ4-TP> Ninjatrap, initializing deadly existence!" << std::endl;
}

NinjaTrap::NinjaTrap(std::string const & name) : ClapTrap (60, 60, 120, 120, 1, 60, 5, 0, name, "<N1NJ4-TP>")
{
	std::cout << "<N1NJ4-TP> Ninjatrap, initializing deadly existence!" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap & src) : ClapTrap (src)
{
	std::cout << "<N1NJ4-TP> Ninjatrap, handing over elder scroll!" << std::endl;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "<N1NJ4-TP> I have many regrets!" << std::endl;
}

NinjaTrap & NinjaTrap::operator=(const NinjaTrap & src)
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

void	NinjaTrap::ninjaShoebox(const ClapTrap & target)
{
	(void)target;
	if (_nrg >= 25)
	{
		_nrg -= 25;
		std::cout << _type << " " << _name << " uses his special move on ";
		std::cout << "ClapTrap : robot arm death slash!" << std::endl;
	}
}

void	NinjaTrap::ninjaShoebox(const FragTrap & target)
{
	(void)target;
	if (_nrg >= 25)
	{
		_nrg -= 25;
		std::cout << _type << " " << _name << " uses his special move on ";
		std::cout << "FragTrap : dysfunction blinding smoke!" << std::endl;
	}
}

void	NinjaTrap::ninjaShoebox(const ScavTrap & target)
{
	(void)target;
	if (_nrg >= 25)
	{
		_nrg -= 25;
		std::cout << _type << " " << _name << " uses his special move on ";
		std::cout << "ScavTrap : sand-skag egg-throw!" << std::endl;
	}
}

void	NinjaTrap::ninjaShoebox(const NinjaTrap & target)
{
	(void)target;
	if (_nrg >= 25)
	{
		_nrg -= 25;
		std::cout << _type << " " << _name << " uses his special move on ";
		std::cout << "NinjaTrap : terrified seppuku!" << std::endl;
	}
}
