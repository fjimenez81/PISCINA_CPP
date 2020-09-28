/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 18:28:17 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/28 19:47:19 by fjimenez         ###   ########.fr       */
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

template <class T>
void print(T const &str) {
  std::cout << str << std::endl;
}

int main()
{
    std::string tst[] = {"Tintín se fue a la guerra", "y descubrió"};
    iter(tst, 2, print);

    int tst1[] = {1, 2, 3, 4};
    iter(tst1, 4, print);
    return (0);
}