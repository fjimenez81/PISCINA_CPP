/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 15:04:33 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/11 09:41:09 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{

    public:

	    Fixed(void);
	    Fixed(int const val);
	    Fixed(float const val);
	    Fixed(const Fixed& src);
	    ~Fixed();
	    Fixed &		operator=(const Fixed& src);
	    float		toFloat(void) const;
	    int			toInt(void) const;
	    int			getRawBits(void) const;
	    void		setRawBits(const int raw);

    private:
	
	    int					_value;
	    static const int	_fractional = 8;
};

std::ostream &	operator<<(std::ostream& os, const Fixed& src);

#endif