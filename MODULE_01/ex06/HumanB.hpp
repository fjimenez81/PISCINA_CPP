/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 18:17:47 by fjimenez          #+#    #+#             */
/*   Updated: 2020/10/19 10:11:34 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	public:

		void	attack(void);
		void	setWeapon(Weapon &weapon);
		HumanB(std::string name);

	private:
	
		std::string	_name;
		Weapon		*_weapon;
};

#endif