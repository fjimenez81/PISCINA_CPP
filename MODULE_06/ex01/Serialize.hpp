/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 11:40:08 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/17 11:48:44 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP


# include <iostream>
# include <string.h>
# include <stdlib.h>
# include <time.h>

struct Data
{
  	std::string s1;
  	int n;
  	std::string s2;
};

void *serialize(void);
Data *deserialize(void *raw);

#endif