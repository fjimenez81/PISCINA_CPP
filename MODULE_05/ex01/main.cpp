/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 11:41:39 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/24 11:48:40 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
	{
		Form	T800("T800", 24, 0);
		std::cout << T800 << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "error : " << e.what() << std::endl;
	}

	Form		T800("T800", 1, 24);
	Bureaucrat	Tartufo("Tartufo", 10);
	Bureaucrat	Perro("Perro", 50);

	std::cout << T800 << std::endl;
	Tartufo.signForm(T800);
	Perro.signForm(T800);
    std::cout << T800 << std::endl;
    Perro.signForm(T800);
	return (0);
}