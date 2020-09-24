/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 10:22:15 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/24 12:24:05 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>
# include "Form.hpp"

class Form;

class Bureaucrat
{
    public:

		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &src);
		~Bureaucrat();
		Bureaucrat & operator=(const Bureaucrat &copy);

		std::string getName() const;
		int	getGrade() const;
		void Promote();
		void Relegate();
		void signForm(Form &form);
		void executeForm(Form const & form);

		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw();
		};

		private:

			Bureaucrat();
			const std::string _name;
			int _grade;
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &in);

#endif