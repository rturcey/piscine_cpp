#include <iostream>
#include <ctime>
#include <cstdlib>

struct				Data
{
	std::string		s1;
	int				i;
	std::string		s2;
};

void	*serialize(void)
{
	Data		*data = new Data;
	std::string	set = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
	std::string	s1;
	std::string	s2;
	for (int i = 0 ; i < 8 ; i++)
	{
		s1 += set[rand() % 62];
		s2 += set[rand() % 62];
	}
	data->s1 = s1;
	data->i = rand();
	data->s2 = s2;
	std::cout << "--- IN serialize() ---" << std::endl;
	std::cout << "addr: " << &data->s1 << " // data: " << data->s1 << std::endl;
	std::cout << "addr: " << &data->i << " // data: " << data->i << std::endl;
	std::cout << "addr: " << &data->s2 << " // data: " << data->s2 << std::endl;
	return (reinterpret_cast<void *>(data));
}

Data	*deserialize(void * raw)
{
	Data	*ptr;

	ptr = reinterpret_cast<Data *>(raw);
	return (ptr);
}

int		main(void)
{
	srand(time(NULL));

	void *ptr = serialize();

	std::cout << "--- main after serialize() ---" << std::endl;
	std::cout << "addr: " << ptr << std::endl;

	Data *data = deserialize(ptr);

	std::cout << "--- main after deserialize() ---" << std::endl;
	std::cout << "addr: " << &data->s1 << " // data: " << data->s1 << std::endl;
	std::cout << "addr: " << &data->i << " // data: " << data->i << std::endl;
	std::cout << "addr: " << &data->s2 << " // data: " << data->s2 << std::endl;

	delete data;

	return 0;
}
