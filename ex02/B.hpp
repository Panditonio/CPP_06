/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoineherbet <antoineherbet@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 05:03:16 by antoineherb       #+#    #+#             */
/*   Updated: 2023/07/19 00:40:54 by antoineherb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                 B CLASS                                    */
/* ************************************************************************** */

#ifndef B_HPP
#define B_HPP

#include "Base.hpp"

class B : public Base
{
    private:
        // private member attributes
        // private member functions
    public:
        // constructors
        B( void );
        B( B const &src );
        // destructor
        ~B( void );
        // operators overload;
        B&  operator=( B const &src );
        // getter, setter
        // public member functions
        // exception classes
};

// std::ostream&   operator<<( std::ostream &os, B const &is );

#endif