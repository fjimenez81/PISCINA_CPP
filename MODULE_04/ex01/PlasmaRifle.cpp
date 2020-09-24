/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 16:16:00 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/22 18:05:00 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void): AWeapon("Plasma rifle", 5, 21) {}

PlasmaRifle::~PlasmaRifle(void)
{
    std::cout << "The PlasmaRifle was destroyed" << std::endl;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &copy){ *this = copy; }

PlasmaRifle& PlasmaRifle::operator=(const PlasmaRifle &copy)
{
    if (this != &copy)
        *this = copy;
    return (*this);
}

void PlasmaRifle::attack(void) const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}