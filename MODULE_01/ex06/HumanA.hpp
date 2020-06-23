/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 18:17:05 by fjimenez          #+#    #+#             */
/*   Updated: 2020/06/23 18:32:22 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA {
public:
	void	attack(void);
	void	setWeapon(Weapon weapon);
	HumanA(std::string name, Weapon &weapon);
private:
	std::string	_name;
	Weapon		&_weapon;
};

#endif