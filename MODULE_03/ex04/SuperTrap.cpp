/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 16:54:36 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/03 12:58:08 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

// Overloaders

SuperTrap & SuperTrap::operator=(const SuperTrap & src)
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

// Constructors and destructors

SuperTrap::SuperTrap(std::string const & name) : ClapTrap(100, 100, 120, 120, 1, 60, 20, 5, name, "<5UP3R-TP>"), FragTrap(name), NinjaTrap(name)
{
	std::cout << "<5UP3R-TP> Supertrap, ultimate lifeform!" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap & src) : ClapTrap(src), FragTrap(src), NinjaTrap(src)
{
	std::cout << "<5UP3R-TP> Supertrap, cloning for greatness!" << std::endl;
	*this = src;
}

SuperTrap::~SuperTrap(void)
{
	std::cout << "<5UP3R-TP> I'm leaking!" << std::endl;
}

//Actions fuctions

void	SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::meleeAttack(target);
}
