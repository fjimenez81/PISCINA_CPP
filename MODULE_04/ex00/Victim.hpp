/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 17:40:02 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/03 13:21:30 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim
{
	protected:
	
		Victim();

		std::string name;

	public:

		Victim(std::string const &name);
		Victim(const Victim& other);
		virtual ~Victim();

		Victim &operator=(const Victim& other);

		std::string const &getName(void) const;
		virtual void getPolymorphed(void) const;
};

std::ostream &operator<<(std::ostream &out, Victim const &sorcerer);

#endif
