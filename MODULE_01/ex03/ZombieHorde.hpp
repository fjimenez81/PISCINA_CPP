/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 16:44:20 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/09 11:09:43 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H

# include "Zombie.hpp"

class ZombieHorde
{
    public:

	    
	    ZombieHorde(int n);
	    ~ZombieHorde();
		void	announce(void);

    private:
	
	    Zombie	*_zombies;
	    int		_num;
};

#endif