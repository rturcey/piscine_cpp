/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 10:44:13 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/09 12:16:29 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main(void)
{
	std::cout << "Test with too high and then too low grade, in constructor" << std::endl;
	try
	{
		Form	test("test", 0, 0);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form	test("test", 200, 200);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "================================================" << std::endl;
	Bureaucrat	kafka("Kafka", 150);
	Bureaucrat	director("Director", 1);
	Form		f0("007", 150, 150);
	Form		f1("815", 145, 145);
	std::cout << "Hi there! I'm " << director << std::endl;
	std::cout << "Yup! I'm " << kafka << std::endl;
	std::cout << "Director: Well Kafka, I would like you to sign and execute form 007. Are you okay with that?" << std::endl;
	std::cout << "Kafka:    Perfectly ok! Let's see that form..." << std::endl;
	std::cout << f0 << std::endl;
	kafka.beSigned(f0);
	kafka.beExecuted(f0);
	std::cout << "(a couple of hours later)" << std::endl;
	std::cout << "Director: Well, let's check the form!" << std::endl;
	std::cout << f0 << std::endl;
	std::cout << "Director: Dear Kafka, that was a very productive day ! Could you try with 815 form?" << std::endl;
	std::cout << "Kafka:    I'll try! Let's see that form..." << std::endl;
	std::cout << f1 << std::endl;
	kafka.beSigned(f1);
	kafka.beExecuted(f1);
	std::cout << "Director: Alright, we've got to upgrade you! Let's do this. Now, try again ?" << std::endl;
	while (kafka.getGrade() > 145)
	{
		try
		{
			kafka.gradeUp();
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << "Kafka:    Let's go boss!" << std::endl;
	kafka.beSigned(f1);
	kafka.beExecuted(f1);
	std::cout << "Director: Already?? Let's check the form!" << std::endl;
	std::cout << f1 << std::endl;
	std::cout << "THE END" << std::endl;
	std::cout << "================================================" << std::endl;
	return (0);
}
