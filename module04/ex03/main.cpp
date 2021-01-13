/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 09:20:52 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/08 11:03:26 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	std::cout << "Learning Ice..." << std::endl;
	src->learnMateria(new Ice());
	std::cout << "Learning Cure..." << std::endl;
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	std::cout << "Creating ice Materia & equiping it..." << std::endl;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	std::cout << "Creating cure Materia & equiping it..." << std::endl;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	std::cout << "Using ice Materia..." << std::endl;
	me->use(0, *bob);
	std::cout << "XP is now " << me->printXP(0) << std::endl;
	std::cout << "Using cure Materia..." << std::endl;
	me->use(1, *bob);
	std::cout << "XP is now " << me->printXP(1) << std::endl;
	std::cout << "Using ice Materia..." << std::endl;
	me->use(0, *bob);
	std::cout << "XP is now " << me->printXP(0) << std::endl;
	std::cout << "Using cure Materia..." << std::endl;
	me->use(1, *bob);
	std::cout << "XP is now " << me->printXP(1) << std::endl;
	std::cout << "Creating ice Materia & equiping it..." << std::endl;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	std::cout << "Creating cure Materia & equiping it..." << std::endl;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	std::cout << "Trying to create ice Materia & equiping it..." << std::endl;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	delete tmp;
	std::cout << "Trying to create ice Materia & equiping it..." << std::endl;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	delete tmp;
	std::cout << "Now, checking: " << std::endl;
	std::cout << "Using 0 Materia..." << std::endl;
	me->use(0, *bob);
	std::cout << "XP is now " << me->printXP(0) << std::endl;
	std::cout << "Using 1 Materia..." << std::endl;
	me->use(1, *bob);
	std::cout << "XP is now " << me->printXP(1) << std::endl;
	std::cout << "Using 2 Materia..." << std::endl;
	me->use(2, *bob);
	std::cout << "XP is now " << me->printXP(2) << std::endl;
	std::cout << "Using 3 Materia..." << std::endl;
	me->use(3, *bob);
	std::cout << "XP is now " << me->printXP(3) << std::endl;

	delete bob;
	delete me;
	delete src;
	return 0;
}
