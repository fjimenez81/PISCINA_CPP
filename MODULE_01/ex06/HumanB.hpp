/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 18:17:47 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/09 12:09:52 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	public:

		~HumanB() {};
		void	attack();
		void	setWeapon(Weapon &weapon);
		HumanB(std::string name);

	private:
	
		std::string	_name;
		Weapon		*_weapon;
};

#endif