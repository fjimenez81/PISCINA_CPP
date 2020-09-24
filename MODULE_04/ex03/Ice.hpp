/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 15:39:20 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/23 19:28:23 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class AMateria;

class Ice: public AMateria
{
    public:

        Ice();
        ~Ice();
        Ice(const Ice & src);
        Ice & operator=(const Ice & src);
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif