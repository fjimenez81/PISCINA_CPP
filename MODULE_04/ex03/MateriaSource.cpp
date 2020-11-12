/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 16:33:41 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/12 17:59:55 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): _cont(0) {}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < _cont; i++)
		delete _materias[i];
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	*this = copy;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &copy)
{
    _cont = 0;
    for (int i = 0; i < copy._cont; i++)
		learnMateria(copy._materias[i]->clone());
	return (*this);
}

void			MateriaSource::learnMateria(AMateria *m)
{
	if (_cont >= 4 || m == NULL)
    	return;
	this->_materias[_cont] = m;
	_cont++;
}

AMateria		*MateriaSource::createMateria(std::string const &type)
{
	int		i = 0;

	while (i < _cont)
	{
		if (_materias[i]->getType() == type)
			return _materias[i]->clone();
		i++;
	}
	return 0;
}

