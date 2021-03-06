/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 18:28:17 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/17 15:44:19 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <class T>
void iter(T *tab, size_t len_tab, void (*f)(T const &))
{
  	if (len_tab == 0 || !f)
        return;
    for (size_t i = 0; i < len_tab; i++)
        f(tab[i]);
}
