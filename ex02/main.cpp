/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoineherbet <antoineherbet@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 05:03:25 by antoineherb       #+#    #+#             */
/*   Updated: 2023/07/13 07:31:17 by antoineherb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <time.h>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*   generate( void ) {
    // srand((unsigned)time(NULL));
    int rdm = rand() % 3;
    if (rdm == 0)
        return (new A());
    else if (rdm == 1)
        return (new B());
    else if (rdm == 2)
        return (new C());
    else {
        std::cerr << "randomizer error" << std::endl;
        return (NULL);
    }
}

void    identify( Base* p ) {
    A*  pa;
    B*  pb;
    C*  pc;

    if ((pa = dynamic_cast<A*>(p)))
        std::cout << "identified : class A" << std::endl;
    else if ((pb = dynamic_cast<B*>(p)))
        std::cout << "identified : class B" << std::endl;
    else if ((pc = dynamic_cast<C*>(p)))
        std::cout << "identified : class C" << std::endl;
    else
        std::cerr << "pointer identification failed" << std::endl;
}

void    identify( Base& p ) {
    try {
        A&  ra = dynamic_cast<A&>(p);
        (void)ra;
        std::cout << "identified : class A" << std::endl;
    }
    catch (std::exception &e) {
        // std::cerr << "bad_cast exception thrown" << std::endl;
    }
    try {
        B&  rb = dynamic_cast<B&>(p);
        (void)rb;
        std::cout << "identified : class B" << std::endl;
    }
    catch (std::exception &e) {
        // std::cerr << "bad_cast exception thrown" << std::endl;
    }
    try {
        C&  rc = dynamic_cast<C&>(p);
        (void)rc;
        std::cout << "identified : class C" << std::endl;
    }
    catch (std::exception &e) {
        // std::cerr << "bad_cast exception thrown" << std::endl;
    }
}


int main( void ) {
    Base	*base;

    std::cout << std::endl;
	std::cout << "/*----------Pointer ID----------*/" << std::endl;

	base = generate();
	identify(base);
	delete base;

	base = generate();
	identify(base);
	delete base;

	base = generate();
	identify(base);
	delete base;

	base = generate();
	identify(base);
	delete base;

	base = generate();
	identify(base);
	delete base;

	base = generate();
	identify(base);
	delete base;

	base = generate();
	identify(base);
	delete base;

	base = generate();
	identify(base);
	delete base;

	std::cout << std::endl;
    std::cout << "/*----------Reference ID----------*/" << std::endl;

	base = generate();
	identify(*base);
	delete base;

	base = generate();
	identify(*base);
	delete base;

	base = generate();
	identify(*base);
	delete base;

	base = generate();
	identify(*base);
	delete base;

	base = generate();
	identify(*base);
	delete base;

	base = generate();
	identify(*base);
	delete base;

	base = generate();
	identify(*base);
	delete base;

	base = generate();
	identify(*base);
	delete base;

	base = generate();
	identify(*base);
	delete base;
    
    return (0);
}