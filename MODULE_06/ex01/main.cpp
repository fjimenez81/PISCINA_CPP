/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 11:37:27 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/17 12:35:31 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

int main()
{
	void *tst;
	Data *data;

	tst = serialize();
	data = deserialize(tst);
    
	std::cout << data->s1 << " " << data->n << " " << data->s2 << std::endl;
  	delete static_cast<char*>(tst);
  	delete data;
		
    return (0);
}