/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 09:57:07 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/17 11:29:24 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>
# include <limits.h>
# include <string.h>
# include <iomanip>
# include <cmath>
# include <math.h>

class Conversion
{
    public:
    
        Conversion();
        ~Conversion();
        Conversion(const Conversion &src);

        Conversion &operator=(const Conversion &copy);
        
        Conversion(std::string str);
        void to_char();
        void to_int();
        void to_float();
        void to_double();

    private:

        long double _number;
        bool _check;
    
};

#endif