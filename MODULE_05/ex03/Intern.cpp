/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 12:42:16 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/24 15:18:27 by fjimenez         ###   ########.fr       */
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

Form *Intern::makeForm(std::string const &form, std::string const &target)
{
    typedef Form* (Intern::*MakeForm)(std::string const &str);
    MakeForm fct[4] = {
            &Intern::Robotomy,
            &Intern::Presidential,
            &Intern::Shrubbery,
    };
    std::string formNames[] = {"RobotomyRequestForm",
                                "PresidentialPardonForm",
                                "ShrubberyCreationForm"};

    for (int i = 0; i < 3; i++)
    {
        if (form == formNames[i])
            return ((this->*(fct[i]))(target));
    }
    std::cout << "Form unknown" << std::endl;
    return NULL;
}