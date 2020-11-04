/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 18:04:47 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/04 19:01:26 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class Human
{
	public:
	
		Human();
		~Human();
		std::string	identifier(void);
		const Brain &getBrain(void);
	
	private:
	
		const Brain	_brain;
};

#endif