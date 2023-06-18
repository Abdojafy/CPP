/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 11:27:57 by ajafy             #+#    #+#             */
/*   Updated: 2023/06/18 18:17:10 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PmergeMe.hpp"

PmergeMe::PmergeMe()
{
	throw std::invalid_argument("Arguments !");
}

bool PmergeMe::is_sorted() {
    for (size_t i = 0; i < vec.size() - 1; ++i) {
        if (vec[i] > vec[i + 1]) {
            return false;
        }
    }
    return true;
}

bool	compare_pair(const std::pair<int, int> &it_a, const std::pair<int, int> &it_b)
{
	if (it_a.first < it_b.first)
		return (true);
	return (false);
}

size_t	jacobshtal_numbers(int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (jacobshtal_numbers(n - 1) + 2 * jacobshtal_numbers(n - 2));
}

void PmergeMe::get_index_vec(size_t size)
{
	size_t	index;
	size_t	i = 3;
	int last = 1;
	size_t value = 1;
	int position = 1;
	std::vector<int> jacob;
	
	while ((index = jacobshtal_numbers(i)) < size - 1 && size > 0)
	{
		jacob.push_back(index);
		i++;
	}
	i = 0;
	while (i < jacob.size())
	{
		value = jacob.at(i);
		this->index_vec.push_back(value);
		position = value - 1;
		while (position > last)
		{
			this->index_vec.push_back(position);
			position--;
		}
		last = value;
		i++;
	}
	while (value++ < size)
		this->index_vec.push_back(value);
}

void PmergeMe::get_index_deq(size_t size)
{
	size_t	index;
	size_t	i = 3;
	int last = 1;
	size_t value = 1;
	int position = 1;
	std::deque<int> jacob;
	
	while ((index = jacobshtal_numbers(i)) < size - 1 && size > 0)
	{
		jacob.push_back(index);
		i++;
	}
	i = 0;
	while (i < jacob.size())
	{
		value = jacob.at(i);
		this->index_deq.push_back(value);
		position = value - 1;
		while (position > last)
		{
			this->index_deq.push_back(position);
			position--;
		}
		last = value;
		i++;
	}
	while (value++ < size)
		this->index_deq.push_back(value);
}

void	PmergeMe::merge_data_vec(std::vector<int> &main_chaine, std::vector<int> &append_chaine)
{
	std::vector<int>::iterator it_index = index_vec.begin();
	while (it_index != index_vec.end())
	{
		std::vector<int>::iterator it_target = std::lower_bound(main_chaine.begin(), main_chaine.end(), append_chaine.at(*it_index - 1));
		main_chaine.insert(it_target, append_chaine.at(*it_index - 1));
		it_index++;
	}
	if (size % 2)
		main_chaine.insert(std::lower_bound(main_chaine.begin(), main_chaine.end(), struggler), struggler);
}

void	PmergeMe::merge_data_deq(std::deque<int> &main_chaine, std::deque<int> &append_chaine)
{
	std::deque<int>::iterator it_index = index_deq.begin();
	while (it_index != index_deq.end())
	{
		std::deque<int>::iterator it_target = std::lower_bound(main_chaine.begin(), main_chaine.end(), append_chaine.at(*it_index - 1));
		main_chaine.insert(it_target, append_chaine.at(*it_index - 1));
		it_index++;
	}
	if (size % 2)
		main_chaine.insert(std::lower_bound(main_chaine.begin(), main_chaine.end(), struggler), struggler);
}

void	PmergeMe::merge_insert_sort_vec()
{
	if (size % 2)
		struggler = vec[size - 1];
	std::vector<std::pair<int, int> > pair;
	std::vector<int>::iterator it = vec.begin();
	while (it != vec.end() && (it + 1) != vec.end())
	{
		if (*it > *(it + 1))
			pair.push_back(std::make_pair(*it, *(++it)));
		else
			pair.push_back(std::make_pair(*(++it), *(it - 1)));
		it++;
	}
	std::sort(pair.begin(), pair.end(), compare_pair);
	std::vector<std::pair<int, int> >::iterator itp = pair.begin();
	std::vector<int> main_chaine;
	std::vector<int> append_chaine;
	while (itp != pair.end())
	{
		main_chaine.push_back(itp->first);
		append_chaine.push_back(itp->second);
		itp++;
	}
	std::vector<int>::iterator itm = main_chaine.begin();
	std::vector<int>::iterator ita = append_chaine.begin();
	if (ita != append_chaine.end())
		main_chaine.insert(itm, *ita);
	itp = pair.begin();
	get_index_vec(append_chaine.size());
	merge_data_vec(main_chaine, append_chaine);
	vec = main_chaine;
}

void	PmergeMe::merge_insert_sort_deq()
{
	if (size % 2)
		struggler = deq[size - 1];
	std::deque<std::pair<int, int> > pair;
	std::deque<int>::iterator it = deq.begin();
	while (it != deq.end() && (it + 1) != deq.end())
	{
		if (*it > *(it + 1))
			pair.push_back(std::make_pair(*it, *(++it)));
		else
			pair.push_back(std::make_pair(*(++it), *(it - 1)));
		it++;
	}
	std::sort(pair.begin(), pair.end(), compare_pair);
	std::deque<std::pair<int, int> >::iterator itp = pair.begin();
	std::deque<int> main_chaine;
	std::deque<int> append_chaine;
	while (itp != pair.end())
	{
		main_chaine.push_back(itp->first);
		append_chaine.push_back(itp->second);
		itp++;
	}
	std::deque<int>::iterator itm = main_chaine.begin();
	std::deque<int>::iterator ita = append_chaine.begin();
	if (ita != append_chaine.end())
		main_chaine.insert(itm, *ita);
	itp = pair.begin();
	get_index_deq(append_chaine.size());
	merge_data_deq(main_chaine, append_chaine);
	deq = main_chaine;
	
}

void	PmergeMe::merge()
{
	std::cout << "Before : ";
	for(size_t i = 0; i < size; i++)
		std::cout << vec[i] << " ";
	std::cout << std::endl;
		
	clock_t start_vec = std::clock();
	merge_insert_sort_vec();
	clock_t end_vec = std::clock() - start_vec;
	
	clock_t start_deq = std::clock();
	merge_insert_sort_deq();
	clock_t end_deq = std::clock() - start_deq;
	
	std::cout << "After : ";
	for(size_t i = 0; i < size; i++)
		std::cout << vec[i] << " ";
	std::cout << std::endl;

	std::cout << "Time to process a range of " ;
	std::cout << size << " elements with std::[vector] : " << (float)end_vec / CLOCKS_PER_SEC * 1000 << " ms" << std::endl;
	
	std::cout << "Time to process a range of " ;
	std::cout << size << " elements with std::[deque] : " << (float)end_deq / CLOCKS_PER_SEC * 1000 << " ms" << std::endl;
	
}

void	PmergeMe::parse(char **arg)
{
	int i = 0;
	int j;

	while (arg[i])
	{
		j = 0;
		while (arg[i][j])
		{
			if (std::isdigit(arg[i][j]))
			{
				long num = 0;
				while (std::isdigit(arg[i][j]) && num <= INT_MAX)
				{
					num = (num * 10) + (arg[i][j] - 48);
					j++;
				}
				if (num > INT_MAX)
				{
					std::cout << "Error : use a positive integer sequence as argument." << std::endl;
					exit (1);
				}
				vec.push_back((int)num);
				deq.push_back((int)num);
			}
			else if (arg[i][j] == ' ')
				j++;
			else
			{
				std::cout << "Error : use a positive integer sequence as argument." << std::endl;
				exit (1);
			}
		}
		i++;
	}
	size = vec.size();
	if (size <= 1)
	{
		std::cout << "Error" << std::endl;
		exit (1);
	}
	if (is_sorted())
	{
		std::cout << "Already sorted" << std::endl;
		exit(1);
	}
}

PmergeMe::PmergeMe(char **av)
{
	this->arg = av;
	if (!arg)
	{
		std::cout << "Error : Empty Arguments !" << std::endl;
		exit(1);
	}
	parse(arg);
	merge();
	// std::cout << std::boolalpha << is_sorted() << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe& obj)
{
	if (this != &obj)
	{
		*this = obj;
	}
}

PmergeMe& PmergeMe::operator=(const PmergeMe& obj)
{
	if (this != &obj)
	{
		*this = obj;
	}
	return (*this);
}

PmergeMe::~PmergeMe()
{
}
