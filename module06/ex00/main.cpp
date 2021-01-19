#include "Scalar.hpp"

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Invalid number of arguments. Should be one str." << std::endl;
		return (-1);
	}
	Scalar		conv(argv[1]);
	std::cout << conv;
	return (0);
}
