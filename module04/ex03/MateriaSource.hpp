/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 09:06:12 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/08 09:16:46 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &src);
		virtual				~MateriaSource(void);
		virtual void		learnMateria(AMateria*);
		virtual AMateria*	createMateria(std::string const & type);
		AMateria*			getMateria(int i) const;

		MateriaSource &operator=(const MateriaSource &rhs);

	private:
		AMateria			**stock;

};

std::ostream	&operator<<(std::ostream &o, MateriaSource const &rhs);

#endif
