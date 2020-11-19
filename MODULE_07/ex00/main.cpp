/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 09:23:36 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/19 12:04:29 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.cpp"

class
Awesome {
    
    public:
    
        Awesome( int n ) : _n( n ) {}
        
        bool operator==( Awesome const & rhs ) { return (this->_n == rhs._n); }
        bool operator!=( Awesome const & rhs ) { return (this->_n != rhs._n); }
        bool operator>( Awesome const & rhs ) { return (this->_n > rhs._n); }
        bool operator<( Awesome const & rhs ) { return (this->_n < rhs._n); }
        bool operator>=( Awesome const & rhs ) { return (this->_n >= rhs._n); }
        bool operator<=( Awesome const & rhs ) { return (this->_n <= rhs._n); }
        int get() const { return _n; }
        
    private:

        int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

int main()
{
    int a = 2;
    int b = 3;

	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;

	std::cout << "min( a, b ) = " << ::min<int>( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    
    Awesome x(4);
    Awesome y(6);
    ::swap(x, y);
    std::cout << "x = " << x << ", y = " << y << std::endl;
    std::cout << "min( x, y ) = " << ::min( x, y ) << std::endl;
    std::cout << "max( x, y ) = " << ::max( x, y ) << std::endl;
    return (0);
}