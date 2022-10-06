/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 13:15:04 by ljoffo            #+#    #+#             */
/*   Updated: 2022/05/06 17:05:53 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int	main(int ac, char **argv)
{
	if (ac != 4)
	{
		std::cout << "Wrong number of arguments, please try again!";
		return 0;
	}
	
	std::string	filename(argv[1]);
	std::string newfilename(filename + ".replace");
	std::string	str;
	std::string	line;
	std::string str2;
	std::string s1(argv[2]);
	int	s1len(s1.size());

	if (!*argv[1] || !*argv[2])
	{
		std::cout << "Wrong argument format, please try again!";
		return 0;
	}
	
	std::ifstream	my_file(filename.c_str());
	if (my_file)
	{
		getline(my_file, str);
		while(!my_file.eof())
		{
			getline(my_file, line);
			str = str + '\n' + line;
		}
	}
	else
	{
		std::cout << "Error: file not opened!";
		return 0;
	}
	std::size_t found(str.find(s1));
	
	while (found != std::string::npos)
	{
		str2.append(str.substr(0, found));
		str2.append(argv[3]);	
		str = str.substr(found + s1len);
		found = str.find(s1);
	}
	str2.append(str);
		
	std::ofstream	new_file(newfilename.c_str());
	if (new_file)    
		new_file << str2;
    else
	{
    	std::cout << "Error: file not opened!";
	}
	return 0;
}