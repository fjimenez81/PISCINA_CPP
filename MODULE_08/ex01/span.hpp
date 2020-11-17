/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 20:05:25 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/17 16:44:37 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
    private:

        unsigned int _max_size;
        std::vector<int> _cont;

    public:

        Span();
        ~Span();
        Span(const Span &src);
        Span(unsigned int N);

        Span &operator=(const Span &copy);

        void addNumber(int number);
        int shortestSpan();
        int longestSpan();
        void addMultipleNumbers(std::vector<int>::iterator const &begin, std::vector<int>::iterator const &end);

};

#endif