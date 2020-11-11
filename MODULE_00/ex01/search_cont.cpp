/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_cont.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 19:43:37 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/09 11:29:00 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	fill(std::string str)
{
	if (str.size() < 11)
		std::cout << std::setw(10) << str;
	else if (str.size() > 10)
		std::cout << str.substr(0,9) << '.';
}

void	introduce(Contact *contacts, int max_index)
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
			std::cout << "ERROR : Please, introduce a valid index" << std::endl;
	}
}

void	search(Contact *contacts, int max_index)
{
	if (max_index == 0)
	{
		std::cout << "You need to add a contact first" << std::endl;
		return;
	}
	for (int i = 0; i < max_index; i++)
	{
		std::cout << "|" << std::setw(10) << (i + 1) << '|';
		fill(contacts[i].getName());
		std::cout << '|';
		fill(contacts[i].getSurname());
		std::cout << '|';
		fill(contacts[i].getNick());
		std::cout << "|\n";
	}
	introduce(contacts, max_index);
}
