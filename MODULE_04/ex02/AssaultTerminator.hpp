/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 11:35:42 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/23 11:37:30 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include <iostream>
# include "ISpaceMarine.hpp"


class AssaultTerminator: public ISpaceMarine
{
    public:

        AssaultTerminator();
        AssaultTerminator(const AssaultTerminator & src);
        AssaultTerminator & operator=(const AssaultTerminator & copy);
        ~AssaultTerminator();
        ISpaceMarine* clone() const;
        void battleCry() const;
        void rangedAttack() const;
        void meleeAttack() const;
};


#endif