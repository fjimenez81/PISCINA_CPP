/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 16:34:44 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/04 13:04:04 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else if (ac > 1)
	{
		for (int i = 1; i < ac; i++)
			for (int j = 0; av[i][j]; j++)
				std::cout << (char)std::toupper(av[i][j]);
		std::cout << std::endl;
	}
	return (0);
}