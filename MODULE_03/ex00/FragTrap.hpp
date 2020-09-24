/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 15:29:50 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/22 12:33:24 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include <iostream>

class FragTrap
{
    public:

        FragTrap(void);
        FragTrap(std::string const & name);
        FragTrap(const FragTrap & src);
        ~FragTrap(void);
        FragTrap & operator=(const FragTrap & src);
	    void	rangedAttack(std::string const & target);
	    void	meleeAttack(std::string const & target);
	    void	takeDamage(unsigned int amount);
	    void	beRepaired(unsigned int amount);
        void	vaulthunter_dot_exe(std::string const & target);

    private:
	
        int			_hp;
	    int			_max_hp;
	    int			_nrg;
	    int			_max_nrg;
	    int			_lvl;
        std::string	_name;
	    int			_melee_atk;
	    int			_ranged_atk;
	    int			_dmg_reduc;
	    
};

#endif