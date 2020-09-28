/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 20:05:25 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/28 20:21:07 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>

class Span
{
    private:

        unsigned int _max_size;

    public:

        Span();
        ~Span();
        Span(const Span &src);
        Span(unsigned int N);

        Span &operator=(const Span &copy);

        void addNumber();

};

#endif