/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 16:47:34 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/22 13:45:14 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public virtual ClapTrap
{
	public:
	
		NinjaTrap(void);
		NinjaTrap(std::string const & name);
		NinjaTrap(const NinjaTrap & src);
		~NinjaTrap(void);

		NinjaTrap & operator=(const NinjaTrap & src);

		void	ninjaShoebox(const ClapTrap & target);
		void	ninjaShoebox(const FragTrap & target);
		void	ninjaShoebox(const ScavTrap & target);
		void	ninjaShoebox(const NinjaTrap & target);
};

#endif