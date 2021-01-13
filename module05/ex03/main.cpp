/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 10:44:13 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/12 18:19:02 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int		main(void)
{
	Bureaucrat	kafka("Kafka", 150);
	std::cout << "__________________" << std::endl;
	std::cout << "Intern creating 3 forms + 1 unknown:" << std::endl;
	Form		*p_form;
	Form		*r_form;
	Form		*s_form;
	Form		*rd_form;
	Intern		randy;
	p_form = randy.makeForm("presidential pardon", "God");
	r_form = randy.makeForm("robotomy request", "The Devil");
	s_form = randy.makeForm("shruberry creation", "Santa");
	try
	{
		rd_form = randy.makeForm("rand", "Santa");
	}
	catch (Intern::UnknownException &e)
	{
		std::cerr << e.unknown("rand") << std::endl;
	}
	std::cout << kafka << std::endl;
	kafka.executeForm(*p_form);
	kafka.executeForm(*r_form);
	kafka.executeForm(*s_form);
	kafka.beSigned(*p_form);
	kafka.beSigned(*r_form);
	kafka.beSigned(*s_form);
	std::cout << "__________________" << std::endl;
	while (kafka.getGrade() > 1)
		kafka.gradeUp();
	std::cout << kafka << std::endl;
	kafka.beSigned(*p_form);
	kafka.beSigned(*r_form);
	kafka.beSigned(*s_form);
	kafka.executeForm(*p_form);
	kafka.executeForm(*r_form);
	kafka.executeForm(*s_form);
	delete p_form;
	delete r_form;
	delete s_form;
	return (0);
}
