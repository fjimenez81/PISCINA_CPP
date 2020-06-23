/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 16:44:20 by fjimenez          #+#    #+#             */
/*   Updated: 2020/06/23 17:39:07 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H

# include "Zombie.hpp"

class ZombieHorde {
    public:
	    void	announce(void);
	    ZombieHorde(int n);
	    ~ZombieHorde(void);
    private:
	    Zombie	*_zombies;
	    int		_num;
};

#endif