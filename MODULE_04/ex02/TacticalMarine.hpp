/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 11:18:42 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/23 12:04:14 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include <iostream>
# include "ISpaceMarine.hpp"


class TacticalMarine: public ISpaceMarine
{
    public:

        TacticalMarine();
        TacticalMarine(const TacticalMarine & src);
        TacticalMarine & operator=(const TacticalMarine & copy);
        ~TacticalMarine();
        ISpaceMarine* clone() const;
        void battleCry() const;
        void rangedAttack() const;
        void meleeAttack() const;
};


#endif