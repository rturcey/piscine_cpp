/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 10:44:13 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/12 16:40:06 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int		main(void)
{
	Bureaucrat	kafka("Kafka", 150);
	std::cout << "__________________" << std::endl;
	std::cout << kafka << std::endl;
	PresidentialPardonForm		p_form("God");
	RobotomyRequestForm			r_form("The Devil");
	ShrubberyCreationForm		s_form("Santa");
	kafka.executeForm(p_form);
	kafka.executeForm(r_form);
	kafka.executeForm(s_form);
	kafka.beSigned(p_form);
	kafka.beSigned(r_form);
	kafka.beSigned(s_form);
	std::cout << "__________________" << std::endl;
	while (kafka.getGrade() > 1)
		kafka.gradeUp();
	std::cout << kafka << std::endl;
	kafka.beSigned(p_form);
	kafka.beSigned(r_form);
	kafka.beSigned(s_form);
	kafka.executeForm(p_form);
	kafka.executeForm(r_form);
	kafka.executeForm(s_form);
	return (0);
}
