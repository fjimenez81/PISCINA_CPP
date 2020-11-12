/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 18:22:39 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/12 17:14:22 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(void) {}

Enemy::Enemy(int hp, std::string const & type)
{
    this->hp = hp;
    this->type = type;
}

Enemy::~Enemy(void) {}

Enemy::Enemy(const Enemy &copy){*this = copy;}

Enemy& Enemy::operator=(const Enemy &copy)
{
    if (this != &copy)
        *this = copy;
    return (*this);
}

std::string const Enemy::getType() const
{
    return (this->type);
}

int Enemy::getHP() const
{
    return (this->hp);
}

void Enemy::takeDamage(int dmg)
{
    if (dmg < 0)
        return ;
    if (this->hp - dmg < 0)
        this->hp = 0;
    else
        this->hp -= dmg;
}
