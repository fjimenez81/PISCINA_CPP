/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 16:09:06 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/22 18:00:17 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{
    public:

        PlasmaRifle();
        ~PlasmaRifle();
        PlasmaRifle(const PlasmaRifle &copy);
        PlasmaRifle& operator=(const PlasmaRifle &copy);
        void attack() const;
};


#endif