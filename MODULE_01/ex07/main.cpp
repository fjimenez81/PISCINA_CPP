/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 19:29:34 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/02 18:14:41 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

int replace(char **av, std::stringstream& file)
{
	std::string cat = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::string buff;
	int pos;
	
	if (s1.length() == 0 || s2.length() == 0)
	{
		std::cout << "ERROR: string empty" << std::endl;
		return (0);
	}
	cat += ".replace";
	std::ofstream dst(cat);
	if (dst.fail())
	{
		std::cout << "ERROR: creating file error" << std::endl;
		return (0);
	}
	buff = file.str();
	while ((pos = buff.find(s1)) != (int)std::string::npos)
	 	buff.replace(pos, s1.length(), s2);
	dst << buff;
	dst.close();
	return (1);
}

int		main(int ac, char **av)
{
	if (ac == 4)
	{
		std::ifstream txt(av[1]);
		if (!txt.good())
		{
			std::cout << "ERROR: opening file error" << std::endl;
			return (1);
		}
		std::stringstream	file;
		file << txt.rdbuf();
		if (!replace(av, file))
			return (1);
		txt.close();
	}
	else
	{
		std::cout << "ERROR: invalid arguments" << std::endl;
		return (1);
	}
	return (0);
}
