/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 11:41:39 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/24 12:28:28 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
  	Bureaucrat				john("John", 1);
	ShrubberyCreationForm	shrub("cozy");
	RobotomyRequestForm		robot("Mike");
	PresidentialPardonForm	pres("Jerry Smith");

  	try {
    john.executeForm(shrub);
  	}
  	catch (std::exception &e) {
    std::cout << "error : " << e.what() << std::endl;
  	}

	john.signForm(shrub);
	john.executeForm(shrub);

	john.signForm(robot);
	john.executeForm(robot);

	john.signForm(pres);
	john.executeForm(pres);

	return (0);
}