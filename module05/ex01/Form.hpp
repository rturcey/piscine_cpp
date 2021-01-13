/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 11:33:07 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/09 12:04:49 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class	Form
{
	public:
		Form(std::string const &name, unsigned int const &grade, unsigned int const &exec);
		Form(const Form &src);
		~Form(void);
		unsigned int		getGrade(void) const;
		unsigned int		getExec(void) const;
		std::string const	getName(void) const;
		void				beExecuted(Bureaucrat bc);
		void				beSigned(Bureaucrat bc);
		bool				isSigned(void) const;

		Form &operator=(const Form &rhs);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char*	what() const throw()
				{
					return ("grade too high");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char*	what() const throw()
				{
					return ("grade too low");
				}
		};

	private:
		std::string const		_name;
		unsigned int const		_grade;
		unsigned int const		_exec;
		bool					_signed;
		Form(void);

};

std::ostream	&operator<<(std::ostream &o, Form const &rhs);

#endif
