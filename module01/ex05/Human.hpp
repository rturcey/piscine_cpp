/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 14:12:38 by rturcey           #+#    #+#             */
/*   Updated: 2020/12/21 15:25:48 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMAN_HPP
#define HUMAN_HPP

#include <iostream>
#include "Brain.hpp"

class	Human
{
	public:
	Human(void);
	~Human(void);

	std::string		identify(void) const;
	const Brain		&getBrain(void) const;

	private:
	const Brain		brain;
};

#endif
