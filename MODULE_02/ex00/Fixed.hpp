/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 20:10:57 by fjimenez          #+#    #+#             */
/*   Updated: 2020/06/23 20:12:01 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
    public:
	    Fixed (void);
	    Fixed (const Fixed& src);
	    ~Fixed (void);
	    Fixed &	operator=(const Fixed& src);
	    int		getRawBits(void);
	    void	setRawBits(const int raw);
    private:
	    int					_value;
	    static const int	_fractional = 8;
};

#endif