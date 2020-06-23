/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 17:28:12 by fjimenez          #+#    #+#             */
/*   Updated: 2020/06/22 20:12:50 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iomanip>
# include <iostream>
# include <string>

class contact
{
	public:
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
    ~contact();
	void	add_contact(int i, std::string input);
	void	print_contact(); 
};

void	search(contact *contacts, int max_index);

#endif