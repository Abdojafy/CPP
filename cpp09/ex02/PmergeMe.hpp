/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 11:27:33 by ajafy             #+#    #+#             */
/*   Updated: 2023/06/18 18:12:29 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PmergeMe_HPP
#define PmergeMe_HPP

#include<algorithm>
#include<iterator>
#include<iostream>
#include<string>
#include<vector>
#include<deque>
#include<cstdlib>
#include<fstream>
#include <sstream>
#include <sys/time.h>
#include <time.h>

class PmergeMe
{
private:
	std::vector<int>	vec;
	std::vector<int>	index_vec;
	std::deque<int>		deq;
	std::deque<int>		index_deq;
	char				**arg;
	size_t				size;
	int					struggler;
public:
	PmergeMe();
	PmergeMe(char **av);
	PmergeMe(const PmergeMe& obj);
	PmergeMe& operator=(const PmergeMe& obj);
	~PmergeMe();
	
	void	parse(char **arg);
	void	merge();
	void	merge_insert_sort_vec();
	void	merge_insert_sort_deq();
	void	get_index_vec(size_t size);
	void	get_index_deq(size_t size);
	void	merge_data_vec(std::vector<int> &main_chaine, std::vector<int> &append_chaine);
	void	merge_data_deq(std::deque<int> &main_chaine, std::deque<int> &append_chaine);
	bool	is_sorted();
};

#endif