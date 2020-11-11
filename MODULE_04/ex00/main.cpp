/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 17:33:34 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/03 15:49:23 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int	main(void)
{
	Sorcerer	robert("Robert", "the Magnificent");
	Victim		jim("Jimmy");
	Peon		joe("Joe");

	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
	//joe.getPolymorphed();

	Peon cloneJoe(joe);
	std::cout << cloneJoe;

	Victim cloneJim(jim);
	std::cout << cloneJim;
	cloneJim = joe;
	std::cout << cloneJim;

	Sorcerer cloneRobert(robert);
	std::cout << cloneRobert;

	std::cout << "\nHeap : \n" << std::endl;

	Peon *Pedrito = new Peon("Pedrito");
	Pedrito->getPolymorphed();
	delete Pedrito;
	std::cout << "\n";

	return 0;
}