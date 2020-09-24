/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 11:41:39 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/24 15:20:32 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
	Intern  randomIntern;
	Bureaucrat bureaucrat("Tartufo", 1);
	Form*   rrf;

	rrf = randomIntern.makeForm("RobotomyRequestForm", "Bender");
	rrf->beSigned(bureaucrat);
	rrf->execute(bureaucrat);

	Bureaucrat bureaucrat2("Perro", 25);
	Form*   rrf2;

	rrf2 = randomIntern.makeForm("ShrubberyCreationForm", "Slide");
	rrf2->beSigned(bureaucrat2);
	rrf2->execute(bureaucrat2);

	Bureaucrat bureaucrat3("Gato", 125);
	Form*   rrf3;

	rrf3 = randomIntern.makeForm("PresidentialPardonForm", "Slide");

	try {
		rrf3->beSigned(bureaucrat3);
		rrf3->execute(bureaucrat3);
	}
	catch (std::exception &e) {
		std::cout << "error: " << e.what() << std::endl;
	}

	delete rrf;
	delete rrf2;
	delete rrf3;
	return (0);
}