/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 18:44:29 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/28 19:39:24 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    std::cout << "Array of integer : " << std::endl;
    Array <int> tst((unsigned int)8);
    for (int i = 0; i < tst.size(); i++)
    {
        tst[i] = i*i;
        std::cout << tst[i] << std::endl;
    }

    std::cout << "\nArray of strings : " << std::endl;
    Array <std::string> tst2((unsigned int)2);

    tst2[0] = "Tintín";
    tst2[1] = "se fué";

    for (int i = 0; i < tst2.size(); i++)
        std::cout << tst2[i] << std::endl;

    std::cout << "\nCatching exception : " << std::endl;
    try
    {
        for (int i = 0; i < 4; i++)
            std::cout << tst2[i] << std::endl;
    }
    catch (std::exception &e){
        std::cout << "error: " << e.what() << std::endl;
    }

    std::cout << "\nCopy assignement (int array) : " << std::endl;
    Array <int>copy = tst;
    for (int i = 0; i < copy.size(); i++)
        std::cout << copy[i] << std::endl;

    std::cout << "\nCopy constructor (string array) : " << std::endl;
    Array <std::string>str(tst2);
    for (int i = 0; i < str.size(); i++)
        std::cout << str[i] << std::endl;
    return (0);
}