/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 16:35:35 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/03 13:03:45 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int	main(void)
{
	SuperTrap	super("5UP4H-TR4P");

	super.takeDamage(100);
	super.beRepaired(100);
	super.meleeAttack("skag");
	super.rangedAttack("badass");
	super.vaulthunter_dot_exe("you");
}