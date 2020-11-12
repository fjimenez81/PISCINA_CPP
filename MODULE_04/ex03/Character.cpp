/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 15:21:06 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/12 18:37:46 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    for (int i = 0; i < 4; i++)
		materia[i] = NULL;
}

Character::~Character()
{
    for(int i = 0; i < 4; i++)
		if (materia[i])
			delete materia[i];
}

Character::Character(std::string name)
{
	for (int i = 0; i < 4; i++)
		materia[i] = NULL;
    _name = name;
}

Character::Character(const Character & src)
{
	for (int i = 0; i < 4; i++)
		materia[i] = NULL;
	*this = src;
}

Character & Character::operator=(const Character & copy)
{
    for (int i = 0; i < 4; i++)
	{
    	if (materia[i])
		{
      		delete materia[i];
      		materia[i] = NULL;
    	}
  	}
  	for (int i = 0; i < 4; i++)
  	{
		if (copy.materia[i])
      		equip(copy.materia[i]->clone());
  	}
  	_name = copy._name;
	return (*this);
}

std::string const & Character::getName() const
{
    return (_name);
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
		if (materia[i] == m)
			return ;
	for (int i = 0; i < 4; i++)
	{
		if (!materia[i])
		{
			materia[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
    if (idx >= 4 || !materia[idx])
		return ;
	this->materia[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 4 || !materia[idx])
		return ;
	this->materia[idx]->use(target);
}