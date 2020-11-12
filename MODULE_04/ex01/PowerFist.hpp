/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 16:36:32 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/12 16:54:40 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class PowerFist: public AWeapon
{
    public:

        PowerFist();
        virtual ~PowerFist();
        PowerFist(const PowerFist &copy);
        PowerFist& operator=(const PowerFist &copy);
        void attack() const;
    
};


#endif