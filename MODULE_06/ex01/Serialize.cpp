/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 12:21:28 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/28 17:15:17 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <time.h>

struct Data
{
  	std::string s1;
  	int n;
  	std::string s2;
};

char rand_char()
{
  	const char charset[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"
	  						"abcdefghijklmnopqrstuvwxyz";

  	return charset[rand() % (sizeof(charset) - 1)];
}

void *serialize(void)
{
	int n = rand();
	char byte[4];
	char str1[8];
	char str2[8];
	char *res;
	int i;
	int j;

  	byte[0] = (n >> 24) & 0xFF;
  	byte[1] = (n >> 16) & 0xFF;
  	byte[2] = (n >> 8) & 0xFF;
  	byte[3] = n & 0xFF;
	for(i = 0; i < 8; i++)
	{
		str1[i] = rand_char();
		str2[i] = rand_char();
	}
	res = new char[sizeof(str1) + sizeof(n) + sizeof(str2)];
	j = 0;
	for (i = 0; i < 8; i++)
	{
		res[j] = str1[i];
		j++;
	}
	*reinterpret_cast<int *>(res + 8) = std::rand();
  	j += sizeof(n);
	for (i = 0; i < 8; i++)
	{
		res[j] = str2[i];
		j++;
	}
	return (res);
}

Data *deserialize(void *raw)
{
	Data *data = new Data;

	data->s1 = std::string(reinterpret_cast<char *>(raw), 8);
	data->n = *reinterpret_cast<int *>(static_cast<char*>(raw) + 8);
	data->s2 = std::string(reinterpret_cast<char *>(static_cast<char*>(raw)
    + 8 + sizeof(int)), 8);

  return data;
}

int main()
{
	void *tst;
	Data *data;

	srand(time(NULL));
	tst = serialize();
	data = deserialize(tst);
    
	std::cout << data->s1 << " " << data->n << " " << data->s2 << std::endl;
  	delete static_cast<char*>(tst);
  	delete data;
		
    return (0);
}