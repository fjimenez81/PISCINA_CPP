/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 18:16:18 by fjimenez          #+#    #+#             */
/*   Updated: 2020/10/19 10:11:48 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
    public:

	    const std::string	&getType(void);
	    void				setType(std::string type);
	    Weapon(std::string type);

    private:
	
	    std::string	_type;
};

#endif