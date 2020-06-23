/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 17:23:04 by fjimenez          #+#    #+#             */
/*   Updated: 2020/06/22 20:16:37 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

contact::~contact()
{
	//std::cout << "The program in closed!!" << std::endl;
	return ;
}

void	contact::print_contact()
{
	std::cout << "First name: " << name << std::endl;
	std::cout << "Last name: " << surname << std::endl;
	std::cout << "Nickname: " << nick << std::endl;
	std::cout << "Login: " << login << std::endl;
	std::cout << "Postal address: " << cp << std::endl;
	std::cout << "Email address: " << email << std::endl;
	std::cout << "Phone number: " << phone << std::endl;
	std::cout << "Birthday date: " << birth << std::endl;
	std::cout << "Favourite meal: " << meal << std::endl;
	std::cout << "Underwear color: " << color << std::endl;
	std::cout << "Darkest secret: " << secret << std::endl;
}

void	contact::add_contact(int i, std::string input)
{
	if (i == 0)
		name = input;
	else if (i == 1)
		surname = input;
	else if (i == 2)
		nick = input;
	else if (i == 3)
		login = input;
	else if (i == 4)
		cp = input;
	else if (i == 5)
		email = input;
	else if (i == 6)
		phone = input;
	else if (i == 7)
		birth = input;
	else if (i == 8)
		meal = input;
	else if (i == 9)
		color = input;
	else if (i == 10)
		secret = input;
}

void add(contact *contact)
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
	contact contacts[8];

	std::cout << "Hello!! This is your little phonebook" << std::endl;
	i = 0;
	while (1)
	{
		getline(std::cin, line);
		if (!line.compare("EXIT"))
		{
			std::cout << "Exit program..." << std::endl;
			return (0);
		}
		else if (!line.compare("ADD"))
		{
			if (i == 8)
				std::cout << "Your phonebook is full" << std::endl;
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
			std::cout << "Introduce a valid command: ADD, SEARCH or EXIT" << std::endl;
		
	}
}