/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 15:44:13 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/24 10:00:01 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::~Ice() {}

Ice::Ice(const Ice & src)
{
    *this = src;
}

Ice & Ice::operator=(const Ice & copy)
{
    if (this != &copy)
        *this = copy;
    return (*this);
}

AMateria* Ice::clone() const
{
    Ice* ptr = new Ice;
    return (ptr);
}

void Ice::use(ICharacter& target)
{
    AMateria::use(target);
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;   
}
