/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 20:25:11 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/17 18:42:36 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &other)
{
    this->c = other.c;
    return (*this);
}

template<typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::begin()
{
    return (this->c.begin());
}

template<typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::end()
{
    return (this->c.end());
}