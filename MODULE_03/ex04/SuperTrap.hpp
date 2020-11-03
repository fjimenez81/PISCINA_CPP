/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 16:54:20 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/03 12:55:36 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "NinjaTrap.hpp"
# include "FragTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
    public:
    
        SuperTrap(std::string const & name);
        SuperTrap(const SuperTrap & src);
        ~SuperTrap(void);

        SuperTrap & operator=(const SuperTrap & src);

        void	rangedAttack(std::string const & target);
        void	meleeAttack(std::string const & target);
};

#endif