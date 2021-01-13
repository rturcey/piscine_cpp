/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 08:00:15 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/08 10:37:58 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure(std::string const & type);
		Cure(void);
		Cure(const Cure &src);
		virtual				~Cure(void);
		virtual AMateria*	clone(void) const;
		virtual void		use(ICharacter& target);

		Cure &operator=(const Cure &rhs);
};

#endif
