/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 15:17:13 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/23 09:22:14 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon
{
    private:
    
        std::string name;
        int damage;
        int apcost;
        

    public:

        AWeapon();
        AWeapon(std::string const & name, int apcost, int damage);
        virtual ~AWeapon();
        AWeapon(const AWeapon &copy);
        AWeapon& operator=(const AWeapon &copy);
        std::string const getName() const;
        int getAPCost() const;
        int getDamage() const;
        virtual void attack() const = 0;

        

};

#endif