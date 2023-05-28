/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 00:06:22 by ajafy             #+#    #+#             */
/*   Updated: 2023/05/28 00:53:50 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include<string>
#include<iostream>
#include<sstream>
#include"Data.hpp"

class Serializer
{
	private:
		Serializer();
		Serializer(const Serializer &obj);
		Serializer& operator=(const Serializer& obj);
		~Serializer();
	public :
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif