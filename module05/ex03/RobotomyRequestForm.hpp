/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 11:06:20 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/12 16:41:59 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <cstdlib>

class	RobotomyRequestForm : public Form
{
	public:

		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &src);
		virtual			~RobotomyRequestForm(void);
		virtual void	execute(Bureaucrat const &executor) const;

		RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);

	private:
		RobotomyRequestForm(void);
		std::string		_target;

};

std::ostream	&operator<<(std::ostream &o, RobotomyRequestForm const &rhs);

#endif
