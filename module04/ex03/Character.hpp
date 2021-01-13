/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 08:31:03 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/08 10:29:54 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class	Character : public ICharacter
{
	public:
		Character(std::string const &name);
		Character(const Character &src);
		virtual						~Character(void);
		virtual void				equip(AMateria* m);
		virtual void				unequip(int idx);
		virtual void				use(int idx, ICharacter& target);
		virtual unsigned int		printXP(int idx) const;

		std::string					getName(void) const;

		Character &operator=(const Character &rhs);

	private:
		Character(void);
		std::string			_name;
		AMateria			**stock;
};

std::ostream	&operator<<(std::ostream &o, Character const &rhs);

#endif
