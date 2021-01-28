/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 11:48:58 by rturcey           #+#    #+#             */
/*   Updated: 2021/01/28 12:01:16 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int		main(void)
{
	MutantStack<int>    mstack;
	std::stack<int>		tstack;

	std::cout << "=== COMPARE MUTANT TO TRUE ===" << std::endl;
	mstack.push(4);
	mstack.push(3);
	mstack.push(17);
	tstack.push(4);
	tstack.push(3);
	tstack.push(17);
	std::cout << "mutant top(): " << mstack.top() << std::endl;
	std::cout << "true top(): " << tstack.top() << std::endl;
	mstack.pop();
	tstack.pop();
	std::cout << "After pop(), mutant top(): " << mstack.top() << std::endl;
	std::cout << "After pop(), true top(): " << tstack.top() << std::endl;
	std::cout << "mutant size(): " << mstack.size() << std::endl;
	std::cout << "true size(): " << tstack.size() << std::endl;
	mstack.push(2);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	std::cout << "empty mutant: " << mstack.empty() << std::endl;
	std::cout << "empty true: " << tstack.empty() << std::endl;
	MutantStack<int>    emstack;
	std::stack<int>		etstack;
	std::cout << "empty new mutant: " << emstack.empty() << std::endl;
	std::cout << "empty new true: " << etstack.empty() << std::endl;
	std::cout << std::endl << "=== ITERATORS ===" << std::endl;

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while(it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return (0);
}
