/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 12:42:16 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/16 15:06:51 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(const Intern &copy)
{
    *this = copy;
}

Intern  &Intern::operator=(const Intern &copy)
{
    if (this != &copy)
        *this = copy;
    return (*this);
}

Form *Intern::Robotomy(std::string const &target)
{
    return (new RobotomyRequestForm(target));
}

Form *Intern::Shrubbery(std::string const &target)
{
    return (new ShrubberyCreationForm(target));
}

Form *Intern::Presidential(std::string const &target)
{
    return (new PresidentialPardonForm(target));
}

std::string	ft_lower(std::string str)
{
	for (int i = 0; str[i]; i++)
		str[i] = tolower(str[i]);
	return (str);
}

Form *Intern::makeForm(std::string const &form, std::string const &target)
{
    typedef Form* (Intern::*MakeForm)(std::string const &str);
    MakeForm formptr[3] = {
		&Intern::Robotomy,
		&Intern::Presidential,
		&Intern::Shrubbery
    };
    std::string formNames[3] = {"RobotomyRequestForm",
                                "PresidentialPardonForm",
                                "ShrubberyCreationForm"};
	
	std::string options1[3] = {"robotomy request",
                            	"presidential pardon",
                                "shrubbery creation"};

	std::string options2[3] = {"robotomy request form",
                            	"presidential pardon form",
                                "shrubbery creation form"};

    for (int i = 0; i < 3; i++)
    {
        if (ft_lower(form) == ft_lower(formNames[i]) ||
            ft_lower(form) == options1[i] || ft_lower(form) == options2[i])
        {
			std::cout << "Intern creates " << formNames[i] << std::endl;
			return ((this->*(formptr[i]))(target));
        }
    }
    std::cout << "Form unknown" << std::endl;
    return (NULL);
}