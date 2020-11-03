/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 16:35:35 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/03 12:11:35 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	FragTrap	frag("CU5TM-BT");
	ScavTrap	scav("Cluck-Trap");

	scav.meleeAttack("skag");
	scav.rangedAttack("badass");

	scav.takeDamage(60);
	scav.takeDamage(60);
	frag.takeDamage(60);

	frag.beRepaired(70);
	scav.beRepaired(70);

	frag.vaulthunter_dot_exe("you");
	frag.vaulthunter_dot_exe("you");
	scav.challengeNewcomer("you");
	scav.challengeNewcomer("you");
	scav.challengeNewcomer("you");

	ScavTrap	copy("REPLACE ME");

	copy = scav;
	copy.meleeAttack("skag");
}