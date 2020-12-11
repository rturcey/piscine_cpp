/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact_class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 10:23:08 by rturcey           #+#    #+#             */
/*   Updated: 2020/12/11 09:38:13 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact::Contact(void)
{
	return;
}

Contact::~Contact(void)
{
	return;
}

void	Contact::init(void)
{
	std::cout << "First name : ";
	std::getline(std::cin, this->first_name);
	std::cout << "Last name : ";
	std::getline(std::cin, this->last_name);
	std::cout << "Nickname : ";
	std::getline(std::cin, this->nickname);
	std::cout << "Login : ";
	std::getline(std::cin, this->login);
	std::cout << "Birthday date : ";
	std::getline(std::cin, this->birthday_date);
	std::cout << "Postal address : ";
	std::getline(std::cin, this->postal_address);
	std::cout << "Email address : ";
	std::getline(std::cin, this->email_address);
	std::cout << "Phone number : ";
	std::getline(std::cin, this->phone_number);
	std::cout << "Favorite meal : ";
	std::getline(std::cin, this->favorite_meal);
	std::cout << "Underwear color : ";
	std::getline(std::cin, this->underwear_color);
	std::cout << "Darkest secret : ";
	std::getline(std::cin, this->underwear_color);
	std::cout << ">> Contact added ! <<" << std::endl;
}

void	Contact::print_truncated(int i)
{
	std::string	trunc;


	std::cout << std::setfill (' ') << std::setw(10);
	std::cout << i + 1 << "|";
	std::cout << std::setfill (' ') << std::setw(10);
	if (this->first_name.length() > 10)
	{
		trunc = this->first_name.substr(0, 10);
		std::cout << trunc << "|";
	}
	else
		std::cout << this->first_name << "|";
	std::cout << std::setfill (' ') << std::setw(10);
	if (this->last_name.length() > 10)
	{
		trunc = this->last_name.substr(0, 10);
		std::cout << trunc << "|";
	}
	else
		std::cout << this->last_name << "|";
	std::cout << std::setfill (' ') << std::setw(10);
	if (this->nickname.length() > 10)
	{
		trunc = this->nickname.substr(0, 10);
		std::cout << trunc << "|";
	}
	else
		std::cout << this->nickname << "|";
	std::cout << std::endl;
}

void	Contact::print_full(void)
{
	std::cout << "First name : " << this->first_name << std::endl;
	std::cout << "Last name : " << this->last_name << std::endl;
	std::cout << "Nickname : " << this->nickname << std::endl;
	std::cout << "Login : " << this->login << std::endl;
	std::cout << "Postal address : " << this->postal_address << std::endl;
	std::cout << "Email address : " << this->email_address << std::endl;
	std::cout << "Phone number : " << this->phone_number << std::endl;
	std::cout << "Birthday date : " << this->birthday_date << std::endl;
	std::cout << "Favorite meal : " << this->favorite_meal << std::endl;
	std::cout << "Underwear color : " << this->underwear_color << std::endl;
	std::cout << "Darkest secret : " << this->darkest_secret << std::endl;
}
