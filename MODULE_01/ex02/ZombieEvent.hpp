/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 15:25:07 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/09 11:04:21 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"

class ZombieEvent
{
	public:

		ZombieEvent();
		~ZombieEvent() {};
		ZombieEvent(std::string type);
		void	setZombieType(std::string type);
		Zombie	*newZombie(std::string name);
		void	randomChump(void);
		
	private:
	
		std::string	_setType;
};

#endif