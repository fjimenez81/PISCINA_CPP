/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 18:17:05 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/04 19:00:52 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	public:

		~HumanA() {};
		void	attack(void);
		void	setWeapon(Weapon weapon);
		HumanA(std::string name, Weapon &weapon);

	private:
	
		std::string	_name;
		Weapon		&_weapon;
};

#endif