/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 20:44:31 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/09 09:51:55 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap()
{
	Pony *p;

	std::cout << "Pony is on the heap" << std::endl;
	std::cout << "----Before----" << std::endl;
	p = new Pony();
	p->eat();
	p->sleep();
	delete p;
	std::cout << "----After----" << std::endl;
}
void	ponyOnTheStack()
{
	std::cout << "Pony is on the stack" << std::endl;
	std::cout << "----Before----" << std::endl;
	Pony p;
	p.eat();
	p.sleep();
	std::cout << "----After----" << std::endl;
}

int	main(void)
{
	ponyOnTheStack();
	std::cout << std::endl;
	ponyOnTheHeap();
	return (0);
}
