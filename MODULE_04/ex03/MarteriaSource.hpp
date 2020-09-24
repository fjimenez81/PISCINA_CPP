/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MarteriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 16:28:50 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/24 10:01:51 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"


class MateriaSource: public IMateriaSource
{
	private:

		AMateria	*_materias[4];
		int			_cont;

    public:
	
		MateriaSource();
		MateriaSource(const MateriaSource &copy);
		virtual ~MateriaSource();
		MateriaSource &operator=(const MateriaSource &copy);
		void		learnMateria(AMateria *m);
		AMateria	*createMateria(std::string const &type);
};


#endif