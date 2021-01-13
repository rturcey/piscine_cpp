/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 11:18:29 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/07 09:49:06 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "Enemy.hpp"
#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "Warrior.hpp"
#include "BasicGun.hpp"

int		main(void)
{
	{
		std::cout << "=============== Main from subject ===============" << std::endl;
		Character*		me = new Character("me");

		std::cout << *me;
		Enemy* b = new RadScorpion();
		AWeapon* pr = new PlasmaRifle();
		AWeapon* pf = new PowerFist();
		me->equip(pr);
		std::cout << *me;
		me->equip(pf);
		me->attack(b);
		std::cout << *me;
		me->equip(pr);
		std::cout << *me;
		me->attack(b);
		std::cout << *me;
		me->attack(b);
		std::cout << *me;
		delete (me);
		delete (b);
		delete (pr);
		delete (pf);
	}
	{
		std::cout << "=============== Augmented main ===============" << std::endl;
		Character*		me = new Character("me");

		std::cout << *me;
		Enemy* a = new SuperMutant();
		Enemy* b = new RadScorpion();
		Enemy* c = new Warrior();
		AWeapon* pr = new PlasmaRifle();
		AWeapon* pf = new PowerFist();
		AWeapon* bg = new BasicGun();
		me->equip(pr);
		std::cout << *me;
		me->equip(pf);
		std::cout << *me;
		me->attack(b);
		std::cout << *me;
		me->recoverAP();
		me->attack(a);
		std::cout << *me;
		me->attack(c);
		std::cout << *me;
		me->equip(pr);
		std::cout << *me;
		me->attack(b);
		std::cout << *me;
		me->attack(b);
		std::cout << *me;
		me->recoverAP();
		me->equip(bg);
		std::cout << *me;
		me->attack(a);
		std::cout << *me;
		me->attack(b);
		std::cout << *me;
		me->attack(c);
		std::cout << *me;
		delete (me);
		delete (a);
		delete (b);
		delete (c);
		delete (pr);
		delete (pf);
		delete (bg);
	}
	return 0;
}
