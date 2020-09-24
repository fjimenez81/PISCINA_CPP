/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 16:48:05 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/22 18:56:02 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include <iostream>
# include "Enemy.hpp"

class RadScorpion: public Enemy
{
    public:

        RadScorpion();
        RadScorpion(int hp, std::string const & type);
        ~RadScorpion();
        RadScorpion(const RadScorpion &copy);
        RadScorpion& operator=(const RadScorpion &copy);
        std::string const getType() const;
        int getHP() const;
        virtual void takeDamage(int dmg);
};

#endif