/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoineherbet <antoineherbet@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 03:55:28 by antoineherb       #+#    #+#             */
/*   Updated: 2023/07/13 04:06:10 by antoineherb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer( void ) {
    return;
}

Serializer::Serializer( Serializer const &src) {
    *this = src;
    return;
}

Serializer::~Serializer( void ) {
    return;
}

Serializer& Serializer::operator=( Serializer const &src) {
    if (this != &src)
        *this = src;
    return (*this);
}

uintptr_t   Serializer::serialize( Data *ptr ) {
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data*       Serializer::deserialize( uintptr_t raw ) {
    return (reinterpret_cast<Data*>(raw));
}