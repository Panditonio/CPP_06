/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoineherbet <antoineherbet@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 03:55:32 by antoineherb       #+#    #+#             */
/*   Updated: 2023/07/13 04:48:35 by antoineherb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                            SERIALIZER CLASS                                */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <stdint.h>
#include "DataStruct.hpp"

class Serializer
{
    private:
        // private member attributes
        // private member functions
        // constructors
        Serializer( void );
        Serializer( Serializer const &src);
        // destructor
        ~Serializer( void );
        // operators overload
        Serializer& operator=( Serializer const &src);
        // getter, setter
    public:
        // public member functions
        static uintptr_t   serialize( Data *ptr );
        static Data*       deserialize( uintptr_t raw );
        // exception classes
};

#endif