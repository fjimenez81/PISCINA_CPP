/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 15:30:05 by fjimenez          #+#    #+#             */
/*   Updated: 2020/06/29 16:24:37 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	FragTrap	frag("CU5TM-BT");
	ScavTrap	scav("SCAV-B8");

	scav.meleeAttack("skag");
	scav.rangedAttack("badass");

	scav.takeDamage(60);
	frag.takeDamage(60);

	frag.beRepaired(60);
	scav.beRepaired(60);

	frag.vaulthunter_dot_exe("you");
	scav.challengeNewcomer("you");
	scav.challengeNewcomer("you");
	scav.challengeNewcomer("you");
}