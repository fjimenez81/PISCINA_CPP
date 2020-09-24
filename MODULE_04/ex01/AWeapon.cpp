/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 15:32:54 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/23 09:19:31 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(void) {}

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
    this->name = name;
    this->apcost = apcost;
    this->damage = damage;
}

AWeapon::~AWeapon(void)
{
    std::cout << "The AWeapon was destroyed" << std::endl;
}

AWeapon::AWeapon(const AWeapon &copy) { *this = copy; }

AWeapon& AWeapon::operator=(const AWeapon &copy)
{
    if (this != &copy)
        *this = copy;
    return (*this);
}

std::string const AWeapon::getName() const
{
    return (this->name);
}

int AWeapon::getAPCost() const
{
    return (this->apcost);
}

int AWeapon::getDamage() const
{
    return (this->damage);
}

//void AWeapon::attack(void) const {}
