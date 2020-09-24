/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 14:54:45 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/24 10:00:49 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::~AMateria() {}

AMateria::AMateria(std::string const & type)
{
    this->xp = 0;
    this->type = type;
}

AMateria::AMateria(const AMateria & src)
{
    *this = src;
}

AMateria & AMateria::operator=(const AMateria & copy)
{
    if (this != &copy)
        *this = copy;
    return (*this);
}

std::string const & AMateria::getType() const
{
    return (this->type);
}

unsigned int AMateria::getXP() const
{
    return (this->xp);
}

void AMateria::use(ICharacter& target)
{
    (void)target;
    this->xp += 10;
}