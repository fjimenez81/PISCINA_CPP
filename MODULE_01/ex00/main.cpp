/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 20:44:31 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/02 11:13:21 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap(std::string name)
{
	Pony *p;

	std::cout << "----Before----" << std::endl;
	p = new Pony(name);
	p->create();
	p->sleep();
	std::cout << "----After----" << std::endl;
	delete p;
}
void	ponyOnTheStack(std::string name)
{
	std::cout << "----Before----" << std::endl;
	Pony p(name);
	p.create();
	p.sleep();
	std::cout << "----After----" << std::endl;
}

int	main(void)
{
	ponyOnTheStack("Pedrito cara-estaca");
	std::cout << std::endl;
	ponyOnTheHeap("Juanito cara_hippy");
	return (0);
}
