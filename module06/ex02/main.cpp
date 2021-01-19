#include <iostream>
#include <ctime>
#include <cstdlib>

class	Base
{
	public:
		virtual ~Base(void) {};
};

class	A : public Base
{
	public:
		A(void)
		{
			std::cout << "=> A CONSTRUCTOR" << std::endl;
		};
};

class	B : public Base
{
	public:
		B(void)
		{
			std::cout << "=> B CONSTRUCTOR" << std::endl;
		};
};

class	C : public Base
{
	public:
		C(void)
		{
			std::cout << "=> C CONSTRUCTOR" << std::endl;
		};
};

Base	*generate(void)
{
	Base	*ptr;
	int		i = rand() % 3;

	if (i == 0)
		ptr = new A;
	else if (i == 1)
		ptr = new B;
	else
		ptr = new C;
	return (ptr);
}

void	identify_from_pointer(Base *p)
{
	try
	{
		A	a = dynamic_cast<A &>(*p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch (std::exception &e)
	{
	}
	try
	{
		B	b = dynamic_cast<B &>(*p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch (std::exception &e)
	{
	}
	try
	{
		C	c = dynamic_cast<C &>(*p);
		std::cout << "C" << std::endl;
		return ;
	}
	catch (std::exception &e)
	{
	}
}

void	identify_from_reference(Base &p)
{
	try
	{
		A	a = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch (std::exception &e)
	{
	}
	try
	{
		B	b = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch (std::exception &e)
	{
	}
	try
	{
		C	c = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		return ;
	}
	catch (std::exception &e)
	{
	}
}

int		main(void)
{
	srand(time(NULL));
	identify_from_pointer(generate());
	identify_from_reference(*generate());
	return (0);
}
