/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 11:05:58 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/16 09:40:59 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::~Form() {}

Form::Form(const Form &src) : _name(src.getName()),
							_signed(src.isSigned()),
							_grade_req(src.gradeRequired()),
							_grade_sign(src.gradeToSign())
{
    *this = src;
}

Form::Form(std::string name, int grade_required, int grade_to_sign): _name(name),
																	_grade_req(grade_required),
																	_grade_sign(grade_to_sign)
{
	if (grade_required > 150 || grade_to_sign > 150)
    	throw Form::GradeTooLowException();
    else if (grade_required < 1 || grade_to_sign < 1)
    	throw Form::GradeTooHighException();
    _signed = false;
}

Form & Form::operator=(const Form &copy)
{
	_signed = copy._signed;
	return (*this);
}

std::string Form::getName() const
{
	return (_name);
}

bool Form::isSigned() const
{
	return (_signed);
}

int Form::gradeRequired() const
{
	return (_grade_req);
}

int Form::gradeToSign() const
{
	return (_grade_sign);
}

void Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() > _grade_sign)
		throw Form::GradeTooLowException();
	else if (_signed)
		throw Form::AlreadySignedException();
	else
		_signed = true;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "grade too high";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "grade too low";
}

const char *Form::AlreadySignedException::what() const throw()
{
	return "form is already signed";
}

std::ostream &operator<<(std::ostream &out, Form const &in)
{
	return (out << in.getName() << " form - signed : " << in.isSigned()
		<< " - grade required : " << in.gradeRequired() << " - grade to sign : "
		<< in.gradeToSign());
}