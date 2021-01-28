/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 14:29:29 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/22 15:41:46 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int		main(void)
{
	std::cout << "|===== EMPTY ARRAY + OUT OF RANGE =====|";
	Array	<int>array;
	for(unsigned int i = 0 ; i < array.size() + 1 ; i++)
	{
		try
		{
			std::cout << array[i];
		}
		catch (std::exception &e)
		{
			std::cerr << std::endl << e.what() << std::endl;
		}

	}
	std::cout << std::endl << "|===== INT ARRAY + OUT OF RANGE =====|" << std::endl;
	Array	<int>array2(10);
	for (unsigned int i = 0 ; i < array2.size() ; i++)
		array2[i] = i;
	for(unsigned int i = 0 ; i < array2.size() + 1 ; i++)
	{
		try
		{
			std::cout << array2[i];
		}
		catch (std::exception &e)
		{
			std::cerr << std::endl << e.what() << std::endl;
		}

	}
	std::cout << std::endl << "|===== CHAR ARRAY + OUT OF RANGE =====|" << std::endl;
	Array	<char>array3(10);
	for (unsigned int i = 0 ; i < array3.size() ; i++)
		array3[i] = i + 'a';
	for(unsigned int i = 0 ; i < array3.size() + 1 ; i++)
	{
		try
		{
			std::cout << array3[i];
		}
		catch (std::exception &e)
		{
			std::cerr << std::endl << e.what() << std::endl;
		}
	}
	std::cout << std::endl << "|===== COPY CONSTRUCTION FROM PREVIOUS CHAR ARRAY =====|" << std::endl;
	Array	<char>array4(array3);
	for(unsigned int i = 0 ; i < array4.size() ; i++)
	{
		try
		{
			std::cout << array4[i];
		}
		catch (std::exception &e)
		{
			std::cerr << std::endl << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << std::endl << "|===== THEN MODIFY IT + COMPARE TO PREVIOUS =====|" << std::endl;
	for (unsigned int i = 0 ; i < array4.size() ; i++)
		array4[i] = i + 'A';
	for(unsigned int i = 0 ; i < array4.size() ; i++)
	{
		try
		{
			std::cout << array4[i];
		}
		catch (std::exception &e)
		{
			std::cerr << std::endl << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	for(unsigned int i = 0 ; i < array3.size() ; i++)
	{
		try
		{
			std::cout << array3[i];
		}
		catch (std::exception &e)
		{
			std::cerr << std::endl << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << std::endl << "|===== COPY BY ASSIGNATION FROM PREVIOUS CHAR ARRAY =====|" << std::endl;
	Array	<char>array5;
	array5 = array3;
	for(unsigned int i = 0 ; i < array5.size() ; i++)
	{
		try
		{
			std::cout << array5[i];
		}
		catch (std::exception &e)
		{
			std::cerr << std::endl << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << std::endl << "|===== THEN MODIFY IT + COMPARE TO PREVIOUS =====|" << std::endl;
	for (unsigned int i = 0 ; i < array5.size() ; i++)
		array5[i] = i + 'A';
	for(unsigned int i = 0 ; i < array5.size() ; i++)
	{
		try
		{
			std::cout << array5[i];
		}
		catch (std::exception &e)
		{
			std::cerr << std::endl << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	for(unsigned int i = 0 ; i < array3.size() ; i++)
	{
		try
		{
			std::cout << array3[i];
		}
		catch (std::exception &e)
		{
			std::cerr << std::endl << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	return 0;
}
