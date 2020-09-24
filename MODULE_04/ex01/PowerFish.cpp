/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFish.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 18:11:00 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/22 18:15:34 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void): AWeapon("Power Fist", 8, 50) {}

PowerFist::~PowerFist(void)
{
    std::cout << "The PowerFist was destroyed" << std::endl;
}

PowerFist::PowerFist(const PowerFist &copy){ *this = copy; }

PowerFist& PowerFist::operator=(const PowerFist &copy)
{
    if (this != &copy)
        *this = copy;
    return (*this);
}

void PowerFist::attack(void) const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}