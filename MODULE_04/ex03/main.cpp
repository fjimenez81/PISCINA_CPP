/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 12:31:09 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/12 18:25:43 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
    AMateria* main;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
    main = tmp;

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
    std::cout << "materia exp: " << main->getXP() << std::endl;
    me->use(1, *bob);
    std::cout << "materia exp: " << main->getXP() << std::endl;
    me->use(2, *bob);
    me->unequip(1);
    me->use(1, *bob);
    me->equip(main);
    me->use(1, *bob);
    std::cout << "materia exp: " << main->getXP() << std::endl;

    Character Jim("Jimmy");
	tmp = src->createMateria("ice");
	Jim.equip(tmp);
	tmp = src->createMateria("cure");
	Jim.equip(tmp);

    Character newJim(Jim);
    newJim = Jim;
    Jim.use(1, Jim);

	delete bob;
	delete me;
	delete src;
	return 0;
}