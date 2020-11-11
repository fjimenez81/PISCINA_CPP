/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 16:37:32 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/11 12:25:20 by fjimenez         ###   ########.fr       */
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