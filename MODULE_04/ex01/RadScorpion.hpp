/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 16:48:05 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/12 17:07:26 by fjimenez         ###   ########.fr       */
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
        virtual ~RadScorpion();
        RadScorpion(const RadScorpion &copy);
        RadScorpion& operator=(const RadScorpion &copy);
        std::string const getType() const;
        int getHP() const;
        virtual void takeDamage(int dmg);
};

#endif