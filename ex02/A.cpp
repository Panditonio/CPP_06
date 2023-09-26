/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoineherbet <antoineherbet@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 05:03:09 by antoineherb       #+#    #+#             */
/*   Updated: 2023/07/13 07:25:19 by antoineherb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A( void ) {
    return;
}

A::A( A const &src ) {
    *this = src;
    return;
}

A::~A( void ) {
    return;
}

A&  A::operator=( A const &src ) {
    if (this != &src)
        *this = src;
    return (*this);
}

// std::ostream&   operator<<( std::ostream &os, A const &is ) {
//     os << "class A type" << std::endl;
//     return (os);
// }