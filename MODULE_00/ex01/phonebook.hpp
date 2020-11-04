/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 17:28:12 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/04 13:27:03 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iomanip>
# include <iostream>
# include <string>

class Contact
{
	private:
	
		std::string name;
		std::string surname;
		std::string nick;
		std::string login;
		std::string cp;
		std::string email;
		std::string phone;
		std::string birth;
		std::string meal;
		std::string color;
		std::string secret;
		
	public:

		Contact() {};
		~Contact() {};
		void	add_contact(int i, std::string input);
		void	print_contact();
		std::string &getName(void);
		std::string &getSurname(void);
		std::string &getNick(void);
};

void	search(Contact *contacts, int max_index);

#endif