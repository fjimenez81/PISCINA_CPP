/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 15:30:05 by fjimenez          #+#    #+#             */
/*   Updated: 2020/06/29 15:50:57 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	frag("CU5TM-BT");

	frag.meleeAttack("skag");
	frag.rangedAttack("badass");

	frag.takeDamage(60);
	frag.takeDamage(60);

	frag.beRepaired(60);
	frag.beRepaired(60);

	frag.vaulthunter_dot_exe("Jack");
	frag.vaulthunter_dot_exe("Jack");
	frag.vaulthunter_dot_exe("Jack");
}