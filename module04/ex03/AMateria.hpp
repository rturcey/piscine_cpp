/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 07:52:27 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/08 10:01:51 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	public:
		AMateria(std::string const & type);
		AMateria(const AMateria &src);
		virtual				~AMateria(void);
		std::string const	&getType(void) const; //Returns the materia type
		unsigned int		getXP(void) const; //Returns the Materia's XP
		virtual AMateria*	clone(void) const = 0;
		virtual void		use(ICharacter& target);

		AMateria &operator=(const AMateria &rhs);

	protected:
		std::string const	_type;
		unsigned int		_xp;
		AMateria(void);
};

#endif
