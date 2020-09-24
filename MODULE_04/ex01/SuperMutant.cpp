/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 18:34:46 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/22 18:51:28 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void): Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Break everything !" << std::endl;
}

SuperMutant::~SuperMutant(void)
{
    std::cout << "Aaargh ..." << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &copy){ *this = copy; }

SuperMutant& SuperMutant::operator=(const SuperMutant &copy)
{
    if (this != &copy)
        *this = copy;
    return (*this);
}

void SuperMutant::takeDamage(int dmg)
{
    dmg -= 3;
    Enemy::takeDamage(dmg);
}