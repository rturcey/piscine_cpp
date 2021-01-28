/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 14:09:57 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/22 15:43:08 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class	Array
{
	public:
		Array<T>(void)
		{
			_array = NULL;
			_size = 0;
		};
		Array<T>(unsigned int n)
		{
			_array = new T[n + 1];
			for (unsigned int i = 0 ; i < n + 1 ; i++)
				_array[i] = 0;
			_size = n;
		};
		Array<T>(const Array &src)
		{
			_array = new T[src.size() + 1];
			for (unsigned int i = 0 ; i < src.size() + 1 ; i++)
				_array[i] = src._array[i];
			_size = src.size();
		};
		~Array<T>(void)
		{
			delete[] _array;
		};
		class OverException : public std::exception
		{
			public:
				virtual const char*	what() const throw()
				{
					return ("Out of array!");
				}
		};
		void			operator=(const Array &rhs)
		{
			T 	*copy = new T[rhs.size() + 1];
			for (unsigned int i = 0 ; i < rhs.size() + 1 ; i++)
				copy[i] = rhs._array[i];
			_size = rhs.size();
			delete[] _array;
			_array = copy;
		};
		T				&operator[](unsigned int i)
		{
				if (i < this->size())
					return (this->_array[i]);
				else
				{
					throw OverException();
				}
		};
		unsigned int	size(void) const
		{
			return (this->_size);
		};
		bool			isEmpty(void) const
		{
			if (this->_array == NULL)
				return (1);
			return (0);
		};

	private:
		unsigned int	_size;
		T				*_array;
};

#endif
