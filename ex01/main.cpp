/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoineherbet <antoineherbet@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 03:55:24 by antoineherb       #+#    #+#             */
/*   Updated: 2023/07/13 04:48:33 by antoineherb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main( void ) {
    Data        *p1 = new Data;
    Data        *p2;
    uintptr_t   raw;

    p1->data = "Zaphod Beeblebrox";
    std::cout << "p1->data = " << p1->data << std::endl;
    std::cout << "serialize p1 then deserialize to create p2" << std::endl;
    raw = Serializer::serialize(p1);
    p2 = Serializer::deserialize(raw);
    std::cout << "p2->data = " << p2->data << std::endl;
    delete p1;
    return (0);
}