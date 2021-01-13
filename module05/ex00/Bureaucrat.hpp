/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 09:07:24 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/09 11:06:42 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class	Bureaucrat
{
	public:
		Bureaucrat(std::string const &name, unsigned int grade);
		Bureaucrat(const Bureaucrat &src);
		~Bureaucrat(void);
		unsigned int		getGrade(void) const;
		std::string const	getName(void) const;
		void				gradeUp(void);
		void				gradeDown(void);

		Bureaucrat &operator=(const Bureaucrat &rhs);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char*	what() const throw()
				{
					return ("Grade cannot be higher than 1");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char*	what() const throw()
				{
					return ("Grade cannot be lower than 150");
				}
		};

	private:
		std::string const	_name;
		unsigned int		_grade;
		Bureaucrat(void);

};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif
