/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 10:45:24 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/21 11:12:26 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

class Test
{

public:
	Test(void) : _n(0) {}
	int		getN(void) const {return this->_n;}
	void	changeN(int ch) {this->_n = ch;}
	bool operator==( Test const & rhs ) { return (this->_n == rhs._n); }
	bool operator!=( Test const & rhs ) { return (this->_n != rhs._n); }
	bool operator>( Test const & rhs ) { return (this->_n > rhs._n); }
	bool operator<( Test const & rhs ) { return (this->_n < rhs._n); }
	bool operator>=( Test const & rhs ) { return (this->_n >= rhs._n); }
	bool operator<=( Test const & rhs ) { return (this->_n <= rhs._n); }

private:
	int _n;
};

std::ostream	&operator<<(std::ostream &o, Test const &rhs)
{
	o << rhs.getN();
	return (o);
}

int		main(void)
{
	std::cout << "|---------- Int ----------|" << std::endl;
	int	a = 2;
	int	b = 3;
	std::cout << "before swap:" << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap( a, b );
	std::cout << "after swap:" << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::cout << "|---------- Str ----------|" << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	std::cout << "before swap:" << std::endl;
	std::cout << "c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "after swap:" << std::endl;
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	std::cout << "|---------- Class ----------|" << std::endl;
	Test		t1;
	Test		t2;
	t1.changeN(21);
	t2.changeN(42);
	std::cout << "before swap:" << std::endl;
	std::cout << "t1 = " << t1 << ", t2 = " << t2 << std::endl;
	::swap(t1, t2);
	std::cout << "after swap:" << std::endl;
	std::cout << "t1 = " << t1 << ", t2 = " << t2 << std::endl;
	std::cout << "min( t1, t2 ) = " << ::min( t1, t2 ) << std::endl;
	std::cout << "max( t1, t2 ) = " << ::max( t1, t2 ) << std::endl;
	return 0;
}
