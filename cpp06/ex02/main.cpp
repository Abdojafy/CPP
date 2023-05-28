/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 22:01:47 by ajafy             #+#    #+#             */
/*   Updated: 2023/05/28 01:40:27 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"A.hpp"
#include"B.hpp"
#include"C.hpp"
#include<cstdlib>
#include<iostream>
#include<string>

Base    *generate(void)
{
    Base *p;
    int r;
    
    srand(time(NULL));
    r = rand();
    if ((r % 3 ) + 1 == 1)
    {
        p = new A();
        return (p);
    }
    if ((r % 3 ) + 1 == 2)
    {
        p = new B();
        return (p);
    }
    p = new C();
    return (p);
}

void    identify(Base* p)
{
    A *a;
    B *b;
    C *c;
    
    a = dynamic_cast<A *> (p);
    b = dynamic_cast<B *> (p);
    c = dynamic_cast<C *> (p);
    if (a)
        std::cout << "the actual type of the object pointed to by p: A." << std::endl;
    if (b)
        std::cout << "the actual type of the object pointed to by p: B." << std::endl;
    if (c)
        std::cout << "the actual type of the object pointed to by p: C." << std::endl;
}

void    identify(Base& p)
{
    try
    {
        A& a = dynamic_cast<A &> (p);
        (void)a;
        std::cout << "the actual type of the object pointed to by p: A." << std::endl;
    }
    catch(const std::exception& e)
    {
        try
        {
            B& b = dynamic_cast<B &> (p);
            (void)b;
            std::cout << "the actual type of the object pointed to by p: B." << std::endl;
        }
        catch(const std::exception& e)
        {
            try
            {
                C& c = dynamic_cast<C &> (p);
                (void)c;
                std::cout << "the actual type of the object pointed to by p: C." << std::endl;
            }
            catch(const std::exception& e)
            {
                std::cout << "Undefined type" << std::endl;
            }
        }
    }
}

int main()
{
    Base *ptr = generate();
    identify(ptr);
    Base *p = generate();
    Base &ref = *p;
    identify(ref);
	return 0;
}