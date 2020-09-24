/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 16:37:32 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/22 13:34:09 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
	
		ScavTrap(void);
		ScavTrap(std::string const & name);
		ScavTrap(const ScavTrap & src);
		~ScavTrap(void);

		ScavTrap & operator=(const ScavTrap & src);

		void	challengeNewcomer(std::string const & target);
};

#endif