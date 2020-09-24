/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 16:36:32 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/22 18:16:30 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class PowerFist: public AWeapon
{
    public:

        PowerFist();
        ~PowerFist();
        PowerFist(const PowerFist &copy);
        PowerFist& operator=(const PowerFist &copy);
        void attack() const;
    
};


#endif