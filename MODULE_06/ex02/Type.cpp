/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Type.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 17:27:58 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/17 13:26:47 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void identify_from_reference(Base &p)
{
	Base d;
	
	try
	{
		d = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::exception &e) {}
	try
	{
		d = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch (std::exception &e) {}
	try
	{
		d = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch (std::exception &e) {}
}

void identify_from_pointer(Base * p)
{
	if(dynamic_cast<A*>(p))
    	std::cout << "A" << std::endl;
  	else if (dynamic_cast<B*>(p))
    	std::cout << "B" << std::endl;
  	else if (dynamic_cast<C*>(p))
    	std::cout << "C" << std::endl;
}

Base *generate(void)
{
	srand(time(0));
	int randBase = rand() % 3;
	if (randBase == 0)
		return (new A);
	else if (randBase == 1)
		return (new B);
	else
		return (new C);
}

int main()
{
  	Base *baseA = generate();

	std::cout << "Pointer*" << std::endl;
	identify_from_pointer(baseA);
	std::cout << "Reference&" << std::endl;
	identify_from_reference(*baseA);
	delete baseA;
    return (0);
}