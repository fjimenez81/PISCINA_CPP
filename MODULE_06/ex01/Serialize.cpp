/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 12:21:28 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/17 12:36:28 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

char rand_char()
{
  	const char charset[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"
	  						"abcdefghijklmnopqrstuvwxyz";

  	return (charset[rand() % (sizeof(charset) - 1)]);
}

void *serialize(void)
{
	char *res;
	int i;

	srand(time(NULL));
	res = new char[8 + 4 + 8];
	for (i = 0; i < 20; i++)
	{
		if (i < 8)
			res[i] = rand_char();
		else if (i == 8)
		{
			*reinterpret_cast<int *>(res + 8) = rand();
			i += 4;
		}
		if (i >= 12)
			res[i] = rand_char();
	}
	return (res);
}

Data *deserialize(void *raw)
{
	Data *data = new Data;

	data->s1 = std::string(reinterpret_cast<char *>(raw), 8);
	data->n = *reinterpret_cast<int *>(static_cast<char*>(raw) + 8);
	data->s2 = std::string(reinterpret_cast<char *>(static_cast<char*>(raw) + 12), 8);

  return (data);
}
