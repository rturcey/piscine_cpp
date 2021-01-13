/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 11:33:07 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/12 16:41:48 by rturcey          ###   ########.fr       */
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
		virtual ~Form(void);
		unsigned int		getGrade(void) const;
		unsigned int		getExec(void) const;
		std::string const	getName(void) const;
		void				beExecuted(Bureaucrat bc) const;
		void				beSigned(Bureaucrat bc);
		bool				isSigned(void) const;
		virtual void		execute(Bureaucrat const &executor) const = 0;

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
		class UnsignedException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("form is unsigned!");
				}
		};
	protected:
		Form(void);
	private:
		std::string const		_name;
		unsigned int const		_grade;
		unsigned int const		_exec;
		bool					_signed;
};

std::ostream	&operator<<(std::ostream &o, Form const &rhs);

#endif
