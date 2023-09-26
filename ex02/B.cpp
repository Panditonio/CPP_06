/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoineherbet <antoineherbet@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 05:03:14 by antoineherb       #+#    #+#             */
/*   Updated: 2023/07/13 07:25:17 by antoineherb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B( void ) {
    return;
}

B::B( B const &src ) {
    *this = src;
    return;
}

B::~B( void ) {
    return;
}

B&  B::operator=( B const &src ) {
    if (this != &src)
        *this = src;
    return (*this);
}

// std::ostream&   operator<<( std::ostream &os, B const &is ) {
//     os << "class B type" << std::endl;
//     return (os);
// }