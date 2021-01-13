/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 11:07:23 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/12 16:41:56 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERRYCREATIONFORM_HPP
#define SHRUBERRYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class	ShrubberyCreationForm : public Form
{
	public:

		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &src);
		virtual			~ShrubberyCreationForm(void);
		virtual void	execute(Bureaucrat const &executor) const;

		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);

	private:
		ShrubberyCreationForm(void);
		std::string		_target;

};

std::ostream	&operator<<(std::ostream &o, ShrubberyCreationForm const &rhs);

#endif
