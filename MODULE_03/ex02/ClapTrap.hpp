/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 16:38:35 by fjimenez          #+#    #+#             */
/*   Updated: 2020/06/29 16:39:02 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
    public:
        ClapTrap(void);
        ClapTrap(int hp, int max_hp, int nrg, int max_nrg, int lvl,
                    int melee_atk, int ranged_atk, int dmg_reduc,
                    std::string const & name, std::string const & type);
        ClapTrap(const ClapTrap & src);
        ~ClapTrap(void);

        ClapTrap & operator=(const ClapTrap & src);

        void	rangedAttack(std::string const & target);
        void	meleeAttack(std::string const & target);
        void	takeDamage(unsigned int amount);
        void	beRepaired(unsigned int amount);
    protected:
        int			_hp;
        int			_max_hp;
        int			_nrg;
        int			_max_nrg;
        int			_lvl;
        int			_melee_atk;
        int			_ranged_atk;
        int			_dmg_reduc;
        std::string	_name;
        std::string	_type;
};

#endif