/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 11:59:17 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/24 12:15:57 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
                      : Form("ShrubberyCreationForm", 137, 145)
{
    this->setTarget(target);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : Form(copy)
{
    *this = copy;
}

ShrubberyCreationForm  &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
    (void)copy;
    return (*this);
}

void ShrubberyCreationForm::action() const
{
    std::ofstream file;

    file.open(this->getTarget() + "_shrubbery", std::ios::trunc);
    if (file.bad())
        return;
    for (int i = 0; i < 3; i++) {
        file <<
        "                                                       \n"<<
		"                      #                                               #                   \n"<<
    	"                     ###                                             ###                  \n"<<
    	"            *#:. .:##*##:. .:#*                             *#:. .:##*##:. .:#*           \n"<<
    	"              *####*###*####*                                 *####*###*####*             \n"<<
    	"       *#:.    .:#*###*#:.    .:#*                     *#:.    .:#*###*#:.    .:#*        \n"<<
    	"           *#########*#########*                           *#########*#########*          \n"<<
    	"        *#:.  *####*###*####*  .:#*                     *#:.  *####*###*####*  .:#*       \n"<<
    	"         *#######**##*##**#######*                       *#######**##*##**#######*        \n"<<
    	"            *##*#####*#####*##*                             *##*#####*#####*##*           \n"<<
    	"   *#:. ...  .:##*###*###*##:.  ... .:#*          *#:. ...  .:##*###*###*##:.  ... .:#*   \n"<<
    	"       *#######*##*#####*##*#######*                  *#######*##*#####*##*#######*       \n"<<
    	"          *#####**#######**#####*                        *#####**#######**#####*          \n"<<
    	"             *      000      *                               *      000      *            \n"<<
    	"                    000                                             000                   \n"<<
		" ..................O000O...........................................O000O..................\n";
        file << std::endl;
    }
    file.close();
}
