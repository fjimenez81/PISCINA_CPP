/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssautTerminator.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 11:37:54 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/23 11:46:55 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
    std::cout <<  "I'll be back..." << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator & src)
{
    *this = src;
}

AssaultTerminator & AssaultTerminator::operator=(const AssaultTerminator & copy)
{
    if (this != &copy)
        *this = copy;
    return (*this);
}

ISpaceMarine* AssaultTerminator::clone() const
{
    ISpaceMarine* ptr = new AssaultTerminator;
	return (ptr);
}

void AssaultTerminator::battleCry() const
{
    std::cout << "This code is unclean. Purify it!" << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
    std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
    std::cout << "* attaque with chainfists *" << std::endl;
}