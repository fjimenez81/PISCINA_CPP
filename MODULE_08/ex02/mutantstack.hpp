/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 20:25:32 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/17 18:42:50 by fjimenez         ###   ########.fr       */
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
        MutantStack(MutantStack const &copy) : std::stack<T>(copy) {};
        virtual ~MutantStack() {};

        MutantStack &operator=(const MutantStack &other);

        typedef typename std::stack<T>::container_type::iterator iterator;

        iterator begin();

        iterator end();
};

#endif