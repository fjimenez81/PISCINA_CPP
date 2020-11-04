/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 11:28:39 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/04 13:33:51 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void add(Contact *contact)
{
	std::string info[11] = {"First name: ", "Last name: ", "Nickname: ", "Login: ",
			"Postal address: ", "Email address: ", "Phone number: ",
			"Birthday date: ", "Favourite meal: ", "Underwear color: ",
			"Darkest secret: "};
			
	std::string line;
	std::cout << "Adding a new contact..." << std::endl;
	for (int i = 0; i < 11; i++)
	{
		std::cout << info[i] << std::endl;
		getline(std::cin, line);
		contact->add_contact(i, line);
	}
	std::cout << "Contact added, you have room for ";
}

int main()
{
	int i;
	std::string line;
	Contact contacts[8];

	std::cout << "Hello!! This is your little phonebook" << std::endl;
	i = 0;
	while (1)
	{
		std::cout << "Introduce: ADD, SEARCH, EXIT" << std::endl;
		getline(std::cin, line);
		if (!line.compare("EXIT"))
		{
			std::cout << "Exit program..." << std::endl;
			return (0);
		}
		else if (!line.compare("ADD"))
		{
			if (i == 8)
				std::cout << "Your phonebook is full!" << std::endl;
			else
			{
				add(&contacts[i]);
				std::cout << (7 - i++) << " more contacts" << std::endl;
			}
		}
		else if (!line.compare("SEARCH"))
		{
			search(contacts, i);
			std::cout << "End of search\n" << std::endl;
		}
		else
			std::cout << "ERROR: ";	
	}
}