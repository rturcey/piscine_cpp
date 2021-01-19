/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 08:27:04 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/19 08:06:03 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYCLASS_HPP
#define MYCLASS_HPP

#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
#include <climits>

class	Scalar
{
	public:
		Scalar(std::string const &str);
		Scalar(const Scalar &src);
		~Scalar(void);

		Scalar				&operator=(const Scalar &rhs);
		char				getChar(void) const;
		double				getDouble(void) const;
		int					getLever(void) const;
		void				convertInt(std::ostream &o, Scalar const &rhs) const;
		void				convertFloat(std::ostream &o, Scalar const &rhs) const;
		void				convertChar(std::ostream &o, Scalar const &rhs) const;
		std::string const	getInput(void) const;

	private:
		std::string const	_str;
		int					_lever;
		char				c;
		double				d;
};

std::ostream	&operator<<(std::ostream &o, Scalar const &rhs);

#endif
