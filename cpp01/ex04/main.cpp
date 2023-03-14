/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 23:44:36 by ajafy             #+#    #+#             */
/*   Updated: 2023/03/14 15:15:56 by ajafy            ###   ########.fr       */
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
		std::string line;
		std::string replace = av[3];
		std::string found = av[2];
		if (outfile_name.empty() || replace.empty() || found.empty())
		{
			std::cout << "empty arguments !\n";
			return (1);
		}
		if (infile.is_open())
		{
			std::getline(infile, line, '\0');
			infile.close();
		}
		else
		{
			std::cout << "Failed to open file \n";
			return (1);
		}
		
		int	tab[line.length() / found.length()];
		int	i = 0;
		size_t t = line.find(found);
		char c = ' ';
		if (!found.compare(" "))
			c = 'a';
		while (t != std::string::npos)
		{
			tab[i++] = t;
			line = line.erase(t, found.length());
			line.insert(t, replace.length(), c);
			t = line.find(found);
		}
		for (int j = 0; j < i; j++)
		{
			line = line.erase(tab[j], replace.length());
			line.insert(tab[j], replace);
		}
		
		std::ofstream outfile(outfile_name.insert(outfile_name.length(), ".replace"));
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