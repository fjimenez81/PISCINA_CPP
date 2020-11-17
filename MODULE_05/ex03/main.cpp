/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 11:41:39 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/16 16:09:52 by fjimenez         ###   ########.fr       */
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
	
	rrf = randomIntern.makeForm("robotomy request", "Bender");
	if (rrf != NULL)
	{
		rrf->beSigned(bureaucrat);
		rrf->execute(bureaucrat);
	}

	Bureaucrat bureaucrat2("Perro", 25);
	Form*   rrf2;

	rrf2 = randomIntern.makeForm("shrubberyCreationForm", "Trees");
	if (rrf2 != NULL)
	{
		rrf2->beSigned(bureaucrat2);
		rrf2->execute(bureaucrat2);
	}

	Bureaucrat bureaucrat3("Gato", 125);
	Form*   rrf3;

	rrf3 = randomIntern.makeForm("PresidentialPardonForm", "Sanchez");
	if (rrf3 != NULL)
	{
		try
		{
			rrf3->beSigned(bureaucrat3);
			rrf3->execute(bureaucrat3);
		}
		catch (std::exception &e) {
			std::cout << "error: " << e.what() << std::endl;
		}
	}

	delete rrf;
	delete rrf2;
	delete rrf3;
	return (0);
}