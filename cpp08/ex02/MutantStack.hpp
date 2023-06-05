/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 16:07:17 by ajafy             #+#    #+#             */
/*   Updated: 2023/06/04 10:26:29 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MutantStack_HPP
#define MutantStack_HPP

#include<algorithm>
#include<iterator>
#include<iostream>
#include<string>
#include<stack>
#include<cstdlib>

template<typename T, class Container = std::deque<T> >
class MutantStack:public std::stack<T>
{
public:
	typedef typename Container::iterator iterator;
	iterator begin()
	{
		return(std::stack<T>::c.begin());
	}
	iterator end()
	{
		return(std::stack<T>::c.end());
	}
	MutantStack()
	{
	}
	MutantStack(const MutantStack& obj)
	{
		if (this != &obj)
			*this = obj;
	}
	MutantStack& operator=(const MutantStack& obj)
	{
		if (this != &obj)
			*this = obj;
		return (*this);
	}
	~MutantStack()
	{
	}
};

#endif