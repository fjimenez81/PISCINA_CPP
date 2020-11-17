/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 19:45:15 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/17 16:39:26 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main()
{
    std::vector<int> myvector;
    for (int i = 0; i < 10; i++)
        myvector.push_back(i);

    try
    {
        for (int i = 0; i < 10; i++)
        {
            if (i == 4)
            {
                std::cout << "Esto es easyfind: " << easyfind(myvector, 4) << std::endl;
                std::cout << "Esto es la posicion de i: " << i << std::endl;
            }
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << "error: " << e.what() << '\n';
    }

    try
    {
        for (int i = 0; i < 10; i++)
        {
            if (i == 8)
            {
                std::cout << "Esto es easyfind: " << easyfind(myvector, 8) << std::endl;
                std::cout << "Esto es la posicion de i: " << i << std::endl;
            }
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << "error: " << e.what() << '\n';
    }

    try
    {
        std::cout << "\nEsto es easyfind: " << easyfind(myvector, 12) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "error: " << e.what() << '\n';
    }
    return (0);
}