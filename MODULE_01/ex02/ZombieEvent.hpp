/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 15:25:07 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/04 19:03:36 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"

class ZombieEvent
{
	public:

		void	setZombieType(std::string type);
		Zombie	*newZombie(std::string name);
		void	randomChump(void);
		void    announce(std::string name);
		ZombieEvent(void);
		~ZombieEvent(void) {};
		
	private:
	
		std::string	_setType;
};

#endif