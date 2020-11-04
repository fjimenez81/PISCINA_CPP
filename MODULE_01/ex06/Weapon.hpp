/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 18:16:18 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/04 19:00:35 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
    public:

	    ~Weapon() {};
		const std::string	&getType(void);
	    void				setType(std::string type);
	    Weapon(std::string type);

    private:
	
	    std::string	_type;
};

#endif