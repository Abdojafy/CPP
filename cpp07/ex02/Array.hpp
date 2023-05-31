/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:46:15 by ajafy             #+#    #+#             */
/*   Updated: 2023/05/30 17:37:41 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef ARRAY_HPP
#define ARRAY_HPP

#include<iostream>

template<typename T>class Array
{
private:
	T *element;
	unsigned int n;
public:
	Array()
	{
		this->element = new T();
	}

	Array(unsigned int n)
	{
		this->n = n;
		this->element = new T[n];
	}

	Array(const Array& obj)
	{
		this->n = obj.n;
		this->element = new T[obj.n];
		for (unsigned int i = 0; i < n; i++)
			this->element[i] = obj.element[i];
	}

	Array& operator=(const Array& obj)
	{
		this->n = obj.n;
		this->element = new T[obj.n];
		for (unsigned int i = 0; i < n; i++)
			this->element[i] = obj.element[i];
	}

	T& operator[](unsigned int n)
	{
		if (this->n <= n)
		{
			out_of_range ex;
			throw ex;
		}
		return (this->element[n]);
	}

	class out_of_range:public std::exception
	{
	public:
		virtual const char * what() const throw()
		{
			return ("The index is out of range");
		}
	};

	unsigned int size()
	{
		return (n);
	}

	~Array()
	{
		if (this->n)
			delete []element;
	}
};


#endif