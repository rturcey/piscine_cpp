/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rturcey <rturcey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 16:24:34 by rturcey           #+#    #+#             */
/*   Updated: 2020/12/28 17:40:16 by rturcey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

int		main(int argc, char **argv)
{
	if (argc != 4 || !argv[1] || !argv[1][0]
	|| !argv[2] || !argv[2][0]
	|| !argv[3] || !argv[3][0])
	{
		std::cout << "Incorrect input : [filename] [s1] [s2]" << std::endl;
		return (-1);
	}
	std::ifstream	ifs(argv[1]);
	if (!(ifs.is_open()))
	{
		std::cout << "Error opening " << argv[1] << std::endl;
		return (-1);
	}
	std::string				buf;
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];
	std::string::size_type found;
	std::stringstream strStream;
	strStream << ifs.rdbuf();
	buf = strStream.str();
	for (std::string::size_type i = 0 ; i < buf.length() ; i++)
	{
		found = buf.find(s1);
		if (found != std::string::npos)
			buf.replace(found, s1.length(), s2);
	}
	std::string		filename = argv[1];
	filename +=  ".replace";
	char			*ptr = &filename[0];
	std::ofstream	ofs(ptr);
	if (!(ofs.is_open()))
	{
		std::cout << "Error opening " << filename << std::endl;
		ifs.close();
		return (-1);
	}
	ofs << buf;
	ifs.close();
	ofs.close();
	return (0);
}
