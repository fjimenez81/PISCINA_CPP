/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 10:53:56 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/24 10:56:50 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#define PRINT(value) (std::cout << value << std::endl);

int main()
{
  	Bureaucrat Tartufo("Tartufo", 2);

	PRINT(Tartufo);
	try {
		Bureaucrat Perro("Perro", 156);
	}
	catch (std::exception &e) {
		PRINT(e.what());
	};

	try
	{
		Tartufo.Promote();
		Tartufo.Promote();
	}
	catch (std::exception &e)
	{
		PRINT(e.what());
	}
	PRINT(Tartufo);
}