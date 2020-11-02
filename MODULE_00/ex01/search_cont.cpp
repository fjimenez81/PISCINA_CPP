/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_cont.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 19:43:37 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/02 09:55:54 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	fill(std::string str)
{
	if (str.size() < 11)
		std::cout << std::setw(10) << str;
	else if (str.size() > 10)
		std::cout << str.substr(0,9) << '.';
}

void	introduce(contact *contacts, int max_index)
{
	std::string line;
	int i;
	
	std::cout << "Introduce the index of the contact: " << std::endl;
	while (1)
	{
		getline(std::cin, line);
		i = atoi(line.c_str());
		if (i <= max_index && i > 0)
		{
			std::cout << "You have selected de contact " << i << std::endl;
			contacts[i - 1].print_contact();
			break ;
		}
		else
			std::cout << "Please, introduce a valid index" << std::endl;
	}
}

void	search(contact *contacts, int max_index)
{
	if (max_index == 0)
	{
		std::cout << "You need to add a contact first" << std::endl;
		return;
	}
	for (int i = 0; i < max_index; i++)
	{
		std::cout << "|" << std::setw(10) << (i + 1) << '|';
		fill(contacts[i].name);
		std::cout << '|';
		fill(contacts[i].surname);
		std::cout << '|';
		fill(contacts[i].nick);
		std::cout << "|\n";
	}
	introduce(contacts, max_index);
}
