/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 20:05:17 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/28 20:22:08 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(): _max_size(0) {}

Span::~Span() {}

Span::Span(const Span &src) {*this = src;}

Span::Span(unsigned int N): _max_size(N) {}

Span & Span::operator=(const Span &copy)
{
    if(this != &copy)
        *this = copy;
    return (*this);
}