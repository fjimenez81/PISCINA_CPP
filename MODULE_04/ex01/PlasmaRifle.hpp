/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 16:09:06 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/12 16:54:57 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{
    public:

        PlasmaRifle();
        virtual ~PlasmaRifle();
        PlasmaRifle(const PlasmaRifle &copy);
        PlasmaRifle& operator=(const PlasmaRifle &copy);
        void attack() const;
};


#endif