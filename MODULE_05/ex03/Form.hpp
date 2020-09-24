/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 11:05:45 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/24 12:27:12 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:

        Form();
        const std::string _name;
        bool _signed;
        const int _grade_req;
        const int _grade_sign;
        std::string _target;

    public:

        Form(std::string name, int grade_required, int grade_to_sign);
        Form(const Form &src);
        virtual ~Form();

        Form &operator=(const Form &copy);

        std::string getName() const;
        bool isSigned() const;
        int gradeRequired() const;
        int gradeToSign() const;
        void beSigned(const Bureaucrat &b);

        void execute(const Bureaucrat &executor) const;
        void setTarget(std::string &target);
        std::string getTarget() const;
        virtual void action() const = 0;

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

        class AlreadySignedException : public std::exception
        {
            public:
                const char *what() const throw();
        };

        class NotSigned : public std::exception
        {
            public:
                const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &out, Form const &in);

#endif