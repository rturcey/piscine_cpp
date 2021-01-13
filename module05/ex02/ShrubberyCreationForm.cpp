/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 11:06:51 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/12 16:59:20 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("shruberry creation", 145, 137), _target(target)
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src)
{
	*this = src;
	return;
}

void						ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	try
	{
		this->beExecuted(executor);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return ;
	}
	std::string		name;
	name = this->_target + "_shrubbery";
	char			*ptr = &name[0];
	std::ofstream	ofs(ptr);

	if (!(ofs.is_open()))
	{
		std::cout << "Error creating " << this->_target + "_shrubbery" << std::endl;
		return ;
	}
	ofs << "            .        +          .      .          ." << std::endl;
	ofs << "     .            _        .                    ." << std::endl;
	ofs << "  ,              /;-._,-.____        ,-----.__" << std::endl;
	ofs << " ((        .    (_:#::_.:::. `-._   /:, /-._, `._," << std::endl;
	ofs << "  `                 \\   _|`\"=:_::.`.);  \\ __/ /" << std::endl;
	ofs << "                      ,    `./  \\:. `.   )==-\'  ." << std::endl;
	ofs << "    .      ., ,-=-.  ,\\, +#./`   \\:.  / /           ." << std::endl;
	ofs << ".           \\/:/`-\' , ,\\ \'` ` `   ): , /_  -o" << std::endl;
	ofs << "       .    /:+- - + +- : :- + + -:\'  /(o-) \\)     ." << std::endl;
	ofs << "  .      ,=\':  \\    ` `/` \' , , ,:\' `\'--\".--\"---._/`7" << std::endl;
	ofs << "   `.   (    \\: \\,-._` ` + \'\\, ,\"   _,--._,---\":.__/" << std::endl;
	ofs << "              \\:  `  X` _| _,\\/\'   .-\'" << std::endl;
	ofs << ".               \":._:`\\____  /:\'  /      .           ." << std::endl;
	ofs << "                    \\::.  :\\/:\'  /              +" << std::endl;
	ofs << "   .                 `.:.  /:\'  }      ." << std::endl;
	ofs << "           .           ):_(:;   \\           ." << std::endl;
	ofs << "                      /:. _/ ,  |" << std::endl;
	ofs << "                   . (|::.     ,`                  ." << std::endl;
	ofs << "     .                |::.    {\\" << std::endl;
	ofs << "                      |::.\\  \\ `." << std::endl;
	ofs << "                      |:::(\\    |" << std::endl;
	ofs << "              O       |:::/{ }  |                  (o" << std::endl;
	ofs << "               )  ___/#\\::`/ (O \"==._____   O, (O  /`" << std::endl;
	ofs << "          ~~~w/w~\"~~,\\` `:/,-(~`\"~~~~~~~~\"~o~\\~/~w|/~" << std::endl;
	ofs << "      ~~~~~~~~~~~~~~~~~~~~~~~\\\\W~~~~~~~~~~~~\\|/~~" << std::endl;
	ofs.close();
	return ;
}

ShrubberyCreationForm		&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	(void)rhs;
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, ShrubberyCreationForm const &rhs)
{
	(void)rhs;
	o << std::endl;
	return (o);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return;
}
