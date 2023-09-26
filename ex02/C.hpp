/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoineherbet <antoineherbet@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 05:03:22 by antoineherb       #+#    #+#             */
/*   Updated: 2023/07/19 00:40:52 by antoineherb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                 C CLASS                                    */
/* ************************************************************************** */

#ifndef C_HPP
#define C_HPP

#include "Base.hpp"

class C : public Base
{
    private:
        // private member attributes
        // private member functions
    public:
        // constructors
        C( void );
        C( C const &src );
        // destructor
        ~C( void );
        // operators overload;
        C&  operator=( C const &src );
        // getter, setter
        // public member functions
        // exception classes
};

// std::ostream&   operator<<( std::ostream &os, C const &is );

#endif