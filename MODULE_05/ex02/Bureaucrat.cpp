/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 10:33:56 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/24 15:29:17 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
    *this = src;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &copy)
{
    _grade = copy.getGrade();
    return (*this);
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    _grade = grade;
}

std::string Bureaucrat::getName() const
{
    return (_name);
}

int	Bureaucrat::getGrade() const
{
    return (_grade);
}

void Bureaucrat::Promote()
{
    if (_grade == 1)
        throw Bureaucrat::GradeTooHighException();
    _grade--;
}

void Bureaucrat::Relegate()
{
    if (_grade == 150)
        throw Bureaucrat::GradeTooLowException();
    _grade++;
}

void Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << _name << " signs " << form.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << _name << " cannot sign " << form.getName() << " because "
        << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(Form const &form)
{
    form.execute(*this);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade too low";
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &in)
{
    return (out << in.getName() << ", bureaucrat grade " << in.getGrade());
}