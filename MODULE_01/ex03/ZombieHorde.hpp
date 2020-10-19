/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 16:44:20 by fjimenez          #+#    #+#             */
/*   Updated: 2020/10/19 09:59:56 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H

# include "Zombie.hpp"

class ZombieHorde
{
    public:

	    void	announce(void);
	    ZombieHorde(int n);
	    ~ZombieHorde();

    private:
	
	    Zombie	*_zombies;
	    int		_num;
};

#endif