/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 11:41:39 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/16 15:51:02 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
  	Bureaucrat				pedri("Pedrito", 1);
	ShrubberyCreationForm	shrub("Becker");
	RobotomyRequestForm		robot("Bender");
	PresidentialPardonForm	pres("Sanchez");

  	try {

    	pedri.executeForm(shrub);
  	}
  	catch (std::exception &e) {
    
		std::cout << "error : " << e.what() << std::endl;
  	}

	pedri.signForm(shrub);
	pedri.executeForm(shrub);

	pedri.signForm(robot);
	pedri.executeForm(robot);

	pedri.signForm(pres);
	pedri.executeForm(pres);

	return (0);
}