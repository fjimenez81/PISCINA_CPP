/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 20:44:31 by fjimenez          #+#    #+#             */
/*   Updated: 2020/06/22 21:30:23 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap(std::string name)
{
	Pony	*p;

	std::cout << "Before scope" << std::endl;
	if (true)
	{
		p = new Pony(name);
		p->sleep();
	}
	std::cout << "After scope" << std::endl;
	delete p;
}
void	ponyOnTheStack(std::string name)
{
	std::cout << "Before scope" << std::endl;
	if (true)
	{
		Pony	p(name);
		p.sleep();
	}
	std::cout << "After scope" << std::endl;
}

int	main(void)
{
	ponyOnTheStack("Pedrito cara-estaca");
	std::cout << std::endl;
	ponyOnTheHeap("Juanito cara_hippy");
	return (0);
}
