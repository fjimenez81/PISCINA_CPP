/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 16:15:33 by fjimenez          #+#    #+#             */
/*   Updated: 2020/11/04 17:48:56 by fjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HPP
# define FILE_HPP

# include <iostream>
# include <fstream>
# include <sstream>

class File
{
    public:

        File() {};
        ~File();
        File(std::string av);

        int actions(std::string s1, std::string s2);
        std::string replace(std::string rdfile, std::string s1, std::string s2);
        
    private:
    
		std::ifstream	_file;
		std::ofstream	_dest;
		std::string		_filename;
};


#endif