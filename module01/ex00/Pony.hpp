/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 09:48:33 by rturcey           #+#    #+#             */
/*   Updated: 2020/12/11 09:57:43 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>

class	Pony
{
	public:
	Pony(void);
	~Pony(void);

	private:
	std::string		color;
	std::string		name;
	std::string		murderer;
};

#endif

