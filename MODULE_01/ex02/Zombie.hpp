/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 15:21:04 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/09 10:58:36 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	public:
	
		Zombie() {};
		~Zombie() {};
		Zombie(std::string name);
		Zombie(std::string name, std::string type);
		void	advert();
		void    announce();
	
	private:
	
		std::string	_name;
		std::string	_type;
};

#endif