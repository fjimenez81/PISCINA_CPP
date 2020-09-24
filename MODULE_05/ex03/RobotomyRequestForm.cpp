/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 12:00:27 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/24 12:19:08 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
  : Form("RobotomyRequestForm", 45, 72)
{
    this->setTarget(target);
    srand(time(0));
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : Form(copy)
{
    *this = copy;
}

RobotomyRequestForm  &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
    (void)copy;
    return (*this);
}

void RobotomyRequestForm::action() const
{
    if (rand() % 2 == 0)
    {
        std::cout << "*** DRILL NOISE ***" << std::endl;
        std::cout << this->getTarget() << " has been robotomized." << std::endl;
    }
    else
        std::cout << "Robotomization failure." << std::endl;
}
