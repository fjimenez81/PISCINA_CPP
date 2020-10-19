/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 15:25:07 by fjimenez          #+#    #+#             */
/*   Updated: 2020/10/19 09:57:24 by fjimenez         ###   ########.fr       */
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
		
	private:
		std::string	_setType;
};

#endif