/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 10:44:13 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/09 11:15:01 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main(void)
{
	std::cout << "Test with too high and then too low grade, in constructor" << std::endl;
	try
	{
		Bureaucrat	test("test", 0);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	test("test", 200);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "================================================" << std::endl;
	Bureaucrat	kafka("Kafka", 150);
	Bureaucrat	director("Director", 1);
	std::cout << "Hi there! I'm " << director << std::endl;
	std::cout << "Yup! I'm " << kafka << std::endl;
	std::cout << "Director: Well Kafka, I would like you to do that job today. Are you okay with that?" << std::endl;
	std::cout << "Kafka:    Perfectly ok!" << std::endl;
	std::cout << "(a couple of hours later)" << std::endl;
	std::cout << "Director: Well, dear Kafka, that was a very productive day ! I'm really excited to upgrade you." << std::endl;
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
	std::cout << "Director: Let's check your new grade : " << kafka << std::endl;
	std::cout << "Kafka:    Oh my fucking god! This is awesome! Your kind of a god to me!" << std::endl;
	std::cout << "Director: Well Kafka, I like your style. I'm gonna change my boring life to raise ponies. Well, I give you my job!" << std::endl;
	kafka = director;
	std::cout << "Director: Let's check your new grade : " << kafka << std::endl;
	std::cout << "Kafka:    Oh my fucking god! This is awesome! I'm kind of a god to me! Well, dear friend, let's talk about your new grade..." << std::endl;
	while (director.getGrade() < 150)
	{
		try
		{
			director.gradeDown();
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << "Kafka:    Let's check your new grade : " << director << std::endl;
	std::cout << "Kafka:    Let's try to do more..." << std::endl;
	try
	{
		director.gradeDown();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "Kafka:    Shit! Maybe, this way..." << std::endl;
	try
	{
		kafka.gradeUp();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "Kafka:    Fuck fuck fuck ! I like ponies." << std::endl;
	std::cout << "THE END" << std::endl;
	std::cout << "================================================" << std::endl;
	return (0);
}
