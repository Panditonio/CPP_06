/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoineherbet <antoineherbet@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 05:03:12 by antoineherb       #+#    #+#             */
/*   Updated: 2023/07/19 00:40:55 by antoineherb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                 A CLASS                                    */
/* ************************************************************************** */

#ifndef A_HPP
#define A_HPP

#include "Base.hpp"

class A : public Base
{
    private:
        // private member attributes
        // private member functions
    public:
        // constructors
        A( void );
        A( A const &src );
        // destructor
        ~A( void );
        // operators overload;
        A&  operator=( A const &src );
        // getter, setter
        // public member functions
        // exception classes
};

// std::ostream&   operator<<( std::ostream &os, A const &is );

#endif