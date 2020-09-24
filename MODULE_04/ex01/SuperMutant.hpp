/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 16:45:35 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/22 18:43:57 by fjimenez         ###   ########.fr       */
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
        ~SuperMutant();
        SuperMutant(const SuperMutant &copy);
        SuperMutant& operator=(const SuperMutant &copy);
        std::string const getType() const;
        int getHP() const;
        virtual void takeDamage(int);
};

#endif