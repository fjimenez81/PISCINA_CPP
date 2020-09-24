/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 12:42:12 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/24 15:07:03 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"

# include <iostream>

class Intern
{
    public:
        
        Intern();
        Intern(const Intern &copy);
        ~Intern();

        Intern &operator=(const Intern &copy);

        Form *Robotomy(std::string const &target);
        Form *Shrubbery(std::string const &target);
        Form *Presidential(std::string const &target);

        Form *makeForm(std::string const &form, std::string const &target);
};

#endif