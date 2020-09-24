/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 18:35:32 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/23 10:09:37 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) {}

Character::Character(std::string const & name): name(name)
{
    this->name = name;
    this->ap = 40;
    this->arm = nullptr;
}

Character::~Character(void) {}

Character::Character(const Character &copy){ *this = copy; }

Character& Character::operator=(const Character &copy)
{
    if (this != &copy)
        *this = copy;
    return (*this);
}

std::string const Character::getName() const
{
    return (this->name);
}

int Character::getAP(void) const
{
    return (this->ap);
}

AWeapon* Character::getArm() const
{
    return (this->arm);
}

void Character::recoverAP() 
{ 
    ap += 10;
    if (ap > 40)
        ap = 40;    
}

void Character::equip(AWeapon *arm)
{
    this->arm = arm;
}

void Character::attack(Enemy *enemy) 
{
    if (ap > 0)
    {
        ap -= this->getArm()->getAPCost();
        std::cout << this->getName() << " attaque " << enemy->getType() << " with a ";
        std::cout << this->arm->getName() << std::endl;
        arm->attack();
        enemy->takeDamage(arm->getDamage());
        if (enemy->getHP() <= 0)
            delete enemy;
    }
    else
        std::cout << "You can't attack, not enough AP" << std::endl;
}

std::ostream&    operator<<(std::ostream& os, const Character& copy)
{
    if (copy.getArm())
        os << copy.getName() << " has " << copy.getAP() << " AP and carries a " << copy.getArm()->getName() << std::endl;
    else
        os << copy.getName() << " has " << copy.getAP() << " AP and is unarmed" << std::endl;
    return (os);
}