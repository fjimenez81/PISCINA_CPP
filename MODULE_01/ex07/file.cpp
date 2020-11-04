/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 16:19:00 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/04 17:40:41 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.hpp"

File::File(char *av)
{
    _file.open(av);
    _filename = av;
}

File::~File()
{
    _file.close();
}

std::string File::replace(std::string rdfile, std::string s1, std::string s2)
{
    size_t pos;
    
    pos = 0;
    while ((pos = rdfile.find(s1, pos)) != std::string::npos)
    {
	 	rdfile.replace(pos, s1.length(), s2);
        pos += s2.length();
    }
    return (rdfile);
}

int File::actions(std::string s1, std::string s2)
{
    std::stringstream	rdfile;
    
    if (!_file.is_open() || !_file.good())
    {
        std::cout << "ERROR: opening file error" << std::endl;
        return (0);
    }
    if (s1.length() == 0 || s2.length() == 0)
    {
        std::cout << "ERROR: S1 or S2 is empty" << std::endl;
        return (0);
    }
    _filename += ".replace";
	_dest.open(_filename, std::ofstream::trunc);
	if (_dest.fail())
	{
		std::cout << "ERROR: creating file error" << std::endl;
		return (0);
	}
	rdfile << _file.rdbuf();
	_dest << replace(rdfile.str(), s1, s2);
	_dest.close();
    return (1);
}