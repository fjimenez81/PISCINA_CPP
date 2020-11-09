/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 16:23:31 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/09 12:09:08 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

int main(int ac, char **av)
{
	if (ac == 4)
	{
		File file(av[1]);
		if (!file.actions(av[2], av[3]))
			return (1);
	}
	else
	{
		std::cout << "ERROR: invalid arguments" << std::endl;
		return (1);
	}
	return (0);
}