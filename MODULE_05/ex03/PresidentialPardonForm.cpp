/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 12:01:05 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/24 12:21:07 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
  : Form("PresidentialPardonForm", 5, 25)
{
    this->setTarget(target);
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : Form(copy)
{
    *this = copy;
}

PresidentialPardonForm  &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
    (void)copy;
    return (*this);
}

void PresidentialPardonForm::action() const
{
    std::cout << this->getTarget()
        << " has been pardonned by Zafod Beeblebrox." << std::endl;
}