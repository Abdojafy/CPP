/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 00:06:19 by ajafy             #+#    #+#             */
/*   Updated: 2023/05/28 00:53:05 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Serializer.hpp"

Serializer::Serializer()
{
}

Serializer::~Serializer()
{
}

Serializer::Serializer(const Serializer& obj)
{
	if (this != &obj)
		*this = obj;
}

Serializer& Serializer::operator=(const Serializer& obj)
{
	(void) obj;
	return (*this);
}

uintptr_t Serializer::serialize(Data* ptr)
{
	uintptr_t p;
	p = reinterpret_cast<uintptr_t> (ptr);
	return (p);
}

Data* Serializer::deserialize(uintptr_t raw)
{
	Data *d;
	d = reinterpret_cast<Data *> (raw);
	return (d);
}
