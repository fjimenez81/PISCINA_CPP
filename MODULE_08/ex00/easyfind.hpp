/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 19:44:24 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/28 20:03:54 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

template <class T>
int &easyfind(T &cont, int n)
{
    typename T::iterator iter = std::find(cont.begin(), cont.end(), n);

  	if (iter == cont.end())
    	throw std::runtime_error("element not found");

  	return (*a);
};

#endif