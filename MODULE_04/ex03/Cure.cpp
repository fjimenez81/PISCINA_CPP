/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 15:57:36 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/24 10:00:24 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){}

Cure::~Cure() {}

Cure::Cure(const Cure & src)
{
    *this = src;
}

Cure & Cure::operator=(const Cure & copy)
{
    if (this != &copy)
        *this = copy;
    return (*this);
}

AMateria* Cure::clone() const
{
    Cure* ptr = new Cure;
    return (ptr);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
    AMateria::use(target);
}