/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 09:46:21 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/28 12:00:11 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int main (int ac, char **av)
{
    if (ac != 2)
		return (1);
	else
	{
		Conversion Number(av[1]);

		Number.to_char();
		Number.to_int();
		Number.to_float();
		Number.to_double();
	}
	
	return (0);
}