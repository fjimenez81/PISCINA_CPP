/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 16:16:45 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/11 11:47:18 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>

class ScavTrap
{
	public:

		ScavTrap(void);
		ScavTrap(std::string const & name);
		ScavTrap(const ScavTrap & src);
		~ScavTrap(void);

		ScavTrap & operator=(const ScavTrap & src);

		void	challengeNewcomer(std::string const & target);
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	private:
	
		int			_hp;
		int			_max_hp;
		int			_nrg;
		int			_max_nrg;
		int			_lvl;
		int			_melee_atk;
		int			_ranged_atk;
		int			_dmg_reduc;
		std::string	_name;
};

#endif