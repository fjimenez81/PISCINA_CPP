/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 16:35:35 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/12 09:29:31 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int	main(void)
{
	NinjaTrap	ninja("Scroll");
	NinjaTrap	ninja2("Takesi");
	FragTrap	frag("FRAG");
	ScavTrap	scav("SCAV");

	ninja.ninjaShoebox(ninja2);
	ninja.ninjaShoebox(frag);
	ninja.ninjaShoebox(scav);
  	ninja.rangedAttack("Shuriken");
	ninja.meleeAttack("Katana");
	ninja.takeDamage(19);
	ninja.takeDamage(170);
}