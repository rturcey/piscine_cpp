#include "span.hpp"

int		main(void)
{
	std::cout << "=> Test with a list of 5 int" << std::endl;
	Span	sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl << std::endl;

	std::cout << "=> Test with a list of 20000 int (each val = val-1 + 1)" << std::endl;
	Span	sp2 = Span(20000);
	std::list<int>					list(20000);
	std::list<int>::iterator		it = list.begin();
	for (int i = 0 ; it != list.end() ; it++)
		*it = i++;
	sp2.addNumber(list);
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl << std::endl;

	std::cout << "=> Test with a list of 20000 int (each val = val-1 + 2)" << std::endl;
	Span	sp3 = Span(20000);
	std::list<int>					list2(20000);
	std::list<int>::iterator		it2 = list2.begin();
	for (int i = 0 ; it2 != list2.end() ; it2++)
		*it2 = (i += 2);
	sp3.addNumber(list2);
	std::cout << sp3.shortestSpan() << std::endl;
	std::cout << sp3.longestSpan() << std::endl << std::endl;
	std::cout << "=> Trying to add an int in a full list" << std::endl;
	try
	{
		sp.addNumber(45);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}
	std::cout << "=> Trying to add a list<int> that our list cannot handle" << std::endl;
	Span	sp4 = Span(10000);
	std::list<int>					list3(20000);
	std::list<int>::iterator		it3 = list3.begin();
	for (int i = 0 ; it3 != list3.end() ; it3++)
		*it3 = (i += 2);
	try
	{
		sp4.addNumber(list3);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}
	return (0);
}
