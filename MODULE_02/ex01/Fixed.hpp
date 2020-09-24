/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 15:04:33 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/22 11:32:59 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <math.h>

class Fixed {

    public:

	    Fixed (void);
	    Fixed (int val);
	    Fixed (float val);
	    Fixed (const Fixed& src);
	    ~Fixed (void);
	    Fixed &		operator=(const Fixed& src);
	    float		toFloat(void) const;
	    int			toInt(void) const;
	    int			getRawBits(void);
	    void		setRawBits(const int raw);

    private:
	
	    int					_value;
	    static const int	_fractional = 8;
};

std::ostream &	operator<<(std::ostream& os, const Fixed& src);

#endif