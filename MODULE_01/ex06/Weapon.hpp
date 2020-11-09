/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 18:16:18 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/09 12:00:00 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
    public:

	    Weapon(std::string type);
		~Weapon() {};
		const std::string	&getType(void);
	    void	setType(std::string type);

    private:
	
	    std::string	_type;
};

#endif