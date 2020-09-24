/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 15:55:58 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/23 15:57:00 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure: public AMateria
{
    public:

        Cure();
        ~Cure();
        Cure(const Cure & src);
        Cure & operator=(const Cure & src);
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif