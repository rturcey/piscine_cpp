/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 10:59:49 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/12 16:42:02 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class	PresidentialPardonForm : public Form
{
	public:

		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &src);
		virtual			~PresidentialPardonForm(void);
		virtual void	execute(Bureaucrat const &executor) const;

		PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);

	private:
		PresidentialPardonForm(void);
		std::string		_target;

};

std::ostream	&operator<<(std::ostream &o, PresidentialPardonForm const &rhs);

#endif
