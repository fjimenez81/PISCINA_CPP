/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 17:41:28 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/22 15:01:16 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon: public Victim
{
	private:

		Peon();

	public:
	
		Peon(std::string const &name);
		Peon(Peon const &peon);
		virtual ~Peon();

		Peon &operator=(const Peon& other);

		void getPolymorphed(void) const;
};

#endif