/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoineherbet <antoineherbet@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 05:03:20 by antoineherb       #+#    #+#             */
/*   Updated: 2023/07/13 07:25:15 by antoineherb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

C::C( void ) {
    return;
}

C::C( C const &src ) {
    *this = src;
    return;
}

C::~C( void ) {
    return;
}

C&  C::operator=( C const &src ) {
    if (this != &src)
        *this = src;
    return (*this);
}

// std::ostream&   operator<<( std::ostream &os, C const &is ) {
//     os << "class C type" << std::endl;
//     return (os);
// }