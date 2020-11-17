/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 15:43:54 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/17 15:45:51 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.cpp"

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
