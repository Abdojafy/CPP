/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:17:28 by ajafy             #+#    #+#             */
/*   Updated: 2023/05/29 12:37:18 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ITER_HPP
#define ITER_HPP

template <typename T>
void iter(T *adress, unsigned int len, void func(T const &adress))
{
	unsigned int i = 0;
	while (i < len)
		func(adress[i++]);
}


#endif