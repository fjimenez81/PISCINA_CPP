/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 20:28:42 by fjimenez          #+#    #+#             */
/*   Updated: 2020/10/19 09:54:17 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class Pony
{
    public:

        ~Pony();
        Pony(std::string name);
        void	sleep(void);

    private:
    
        bool		_sleep;
        std::string _name;
};


#endif