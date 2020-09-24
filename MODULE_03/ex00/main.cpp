/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 15:30:05 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/22 12:37:18 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	frag("CU5TM-BT");
	FragTrap	tst;

	//tst = frag;

	frag.meleeAttack("skag");
	tst.meleeAttack("skag");
	tst.rangedAttack("badass");

	frag.takeDamage(60);
	tst.takeDamage(60);

	frag.beRepaired(60);
	tst.beRepaired(60);

	frag.vaulthunter_dot_exe("Jack");
	frag.vaulthunter_dot_exe("Jack");
	frag.vaulthunter_dot_exe("Jack");
}