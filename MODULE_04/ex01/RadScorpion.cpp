/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 18:35:11 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/22 18:57:00 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void): Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion(void)
{
    std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &copy){ *this = copy; }

RadScorpion& RadScorpion::operator=(const RadScorpion &copy)
{
    if (this != &copy)
        *this = copy;
    return (*this);
}

void RadScorpion::takeDamage(int dmg)
{
    dmg -= 3;
    Enemy::takeDamage(dmg);
}