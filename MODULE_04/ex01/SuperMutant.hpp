/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 16:45:35 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/12 17:07:37 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <iostream>
# include "Enemy.hpp"

class SuperMutant: public Enemy
{
    public:

        SuperMutant();
        SuperMutant(int hp, std::string const & type);
        virtual ~SuperMutant();
        SuperMutant(const SuperMutant &copy);
        SuperMutant& operator=(const SuperMutant &copy);
        std::string const getType() const;
        int getHP() const;
        virtual void takeDamage(int);
};

#endif