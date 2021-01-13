/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 17:02:34 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/12 18:18:00 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class	Intern
{
	public:
		Intern(void);
		Intern(const Intern &src);
		~Intern(void);
		Form	*presidentialNew(std::string const &target);
		Form	*robotomyNew(std::string const &target);
		Form	*shruberryNew(std::string const &target);
		Form	*makeForm(std::string const &name, std::string const &target);

		class UnknownException
		{
			public:
				std::string		unknown(std::string const &name) const throw()
				{
					return ("Unknown form: " + name);
				}
		};

		Intern &operator=(const Intern &rhs);

	private:
		std::string		_knownsForms[3];
		typedef Form 	*(Intern::*methodPtr)(std::string const &);
		methodPtr 		_methods[3];
};

std::ostream	&operator<<(std::ostream &o, Intern const &rhs);

#endif
