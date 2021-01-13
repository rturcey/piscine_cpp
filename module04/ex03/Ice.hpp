/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 07:59:26 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/08 10:37:51 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice(std::string const & type);
		Ice(void);
		Ice(const Ice &src);
		virtual				~Ice(void);
		virtual AMateria*	clone(void) const;
		virtual void		use(ICharacter& target);

		Ice &operator=(const Ice &rhs);
};

#endif
