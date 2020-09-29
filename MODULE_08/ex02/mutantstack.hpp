/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 20:25:32 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/29 11:08:04 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <vector>

template <class T>
class MutantStack : public std::stack<T>
{
    public:

        MutantStack() : std::stack<T>() {};
        MutantStack(MutantStack &copy) : std::stack<T>(copy) {};
        virtual ~MutantStack() {};

        MutantStack &operator=(const MutantStack &other)
        {
            this->c = other.c;
            return (*this);
        }

        typedef typename std::stack<T>::container_type::iterator iterator;

        iterator begin()
        {
            return (std::begin(this->c));
        }

        iterator end()
        {
            return (std::end(this->c));
        }
};

#endif