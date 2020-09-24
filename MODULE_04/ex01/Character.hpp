/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 16:41:00 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/23 09:45:47 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
    private:

        std::string name;
        int         ap;
        AWeapon    *arm;
        

    public:

        Character();
        Character(std::string const & name);
        ~Character();
        Character(const Character &copy);
        Character& operator=(const Character &copy);
        void recoverAP();
        void equip(AWeapon*);
        void attack(Enemy*);
        std::string const getName() const;
        int getAP(void) const;
        AWeapon* getArm() const;
};

std::ostream&    operator<<(std::ostream& os, const Character& copy);

#endif