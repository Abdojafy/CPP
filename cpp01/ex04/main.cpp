/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 23:44:36 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/13 02:12:17 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<fstream>
#include<iostream>
#include<string>

int main(int ac, char *av[])
{
	if (ac == 4)
	{
		std::ifstream infile(av[1]);
		std::string outfile_name = av[1];
		std::ofstream outfile(outfile_name.insert(outfile_name.length(), ".replace"));
		std::string line;
		std::string replace = av[3];
		std::string found = av[2];
		if (infile.is_open())
		{
			std::getline(infile, line, '\0');
			infile.close();
		}
		else
		{
			std::cout << "Failed to open file \n";
		}
		while (1)
		{
			size_t t = line.find(found);
			if (t != std::string::npos)
			{
				line = line.erase(t, found.length());
				line.insert(t, av[3]);
			}
			else
			{
				break ;
			}
		}
		if (outfile.is_open())
		{
			outfile << line;
			outfile.close();
		}
		else
		{
			std::cout << "Failed to open file \n";
		}
	}
	else
	{
			std::cout << "Incorrect number of arguments !" << std::endl;
	}
}