/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 18:41:19 by fjimenez          #+#    #+#             */
/*   Updated: 2020/09/28 19:35:47 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <class T>

class Array
{
    private:

        T	*array_;
        int	_size;

	public:

		Array(): array_(new T[0]), _size(0) {}
		Array(unsigned int n): array_(new T[n]), _size(n) {}
		Array(const Array &src): array_(NULL), _size(0) {*this = src;}
		~Array() {delete [] array_;}

		Array &operator=(const Array &copy)
		{
			if (_size != copy.size())
			{
      			if (array_)
        			delete [] array_;
      			_size = copy._size;
      			array_ = new T[_size];
    		}
    		for (int i = 0; i < _size; i++)
      			array_[i] = copy.array_[i];
    		return (*this);
		}

		T &operator[](int idx)
		{
    		if (idx >= _size || idx < 0)
    			throw Array::OutOfLimit();
    		return array_[idx];
  		}

		int size() const {return (_size);}

		class OutOfLimit : public std::exception
		{
			public:
				const char *what() const throw() { return "element ouf of limit"; };
		};
};

#endif