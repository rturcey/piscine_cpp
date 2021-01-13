/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 08:21:53 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/06 09:57:25 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class	Sorcerer
{
	public:
		Sorcerer(std::string name, std::string title);
		Sorcerer(const Sorcerer &src);
		~Sorcerer(void);
		std::string		getName(void) const;
		std::string		getTitle(void) const;
		void			polymorph(Victim const &victim) const;

		Sorcerer &operator=(const Sorcerer &rhs);

	private:
		std::string		name;
		std::string		title;
		Sorcerer(void);

};

std::ostream	&operator<<(std::ostream &o, Sorcerer const &rhs);

#endif
