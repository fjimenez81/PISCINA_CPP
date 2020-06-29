/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 16:36:11 by fjimenez          #+#    #+#             */
/*   Updated: 2020/06/29 16:57:15 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {
public:
	FragTrap(void);
	FragTrap(std::string const & name);
	FragTrap(const FragTrap & src);
	~FragTrap(void);

	FragTrap & operator=(const FragTrap & src);

	void	vaulthunter_dot_exe(std::string const & target);
};

#endif