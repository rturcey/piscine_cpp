/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact_class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 10:17:38 by rturcey           #+#    #+#             */
/*   Updated: 2020/12/11 09:37:01 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

class Contact
{
	public:
	Contact(void);
	~Contact(void);

	void		print_truncated(int i);
	void		print_full(void);
	void		init(void);

	private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	login;
	std::string	postal_address;
	std::string	email_address;
	std::string	favorite_meal;
	std::string	underwear_color;
	std::string	darkest_secret;
	std::string	birthday_date;
	std::string	phone_number;
};

#endif
