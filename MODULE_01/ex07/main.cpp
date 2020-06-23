/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 19:29:34 by fjimenez          #+#    #+#             */
/*   Updated: 2020/06/23 19:49:58 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <fstream>
# include <string>

int		main(int ac, char **av)
{
	if (ac != 4 || std::strlen(av[1]) == 0 || std::strlen(av[2]) == 0 ||
        std::strlen(av[3]) == 0)
	{
		std::cout << "ERROR: invalid arguments \n";
		return (0);
	}

	std::ifstream txt(av[1]);

	if (txt.good() == false)
	{
		std::cout << "ERROR: opening file error" << std::endl;
		return (0);
	}

	std::ofstream dst("txt_changed");
	if (dst.fail())
	{
		std::cout << "ERROR: creating file error" << std::endl;
		return (0);
	}

	std::string s1 = av[2];
	std::string s2 = av[3];
	std::string buff;
	int pos;

	while (getline(txt, buff))
	{	if ((pos = buff.find(s1)) != (int)std::string::npos)
			buff.replace(pos, s1.length(), s2);
		dst << buff;
		dst << std::endl;
	}
	txt.close();
	dst.close();
	return (0);
}
