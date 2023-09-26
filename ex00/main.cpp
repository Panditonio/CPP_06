/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoineherbet <antoineherbet@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:13:52 by antoineherb       #+#    #+#             */
/*   Updated: 2023/07/30 04:53:33 by antoineherb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cstdlib>

#include <iostream>
#include <string>
#include "ScalarConverter.hpp"

// int main(int argc, char* argv[]) {
//     if (argc != 2) {
//         std::cout << "Syntax: " << argv[0] << " <input_argument>" << std::endl;
//         return 1;
//     }

//     std::string input = argv[1];
//     ScalarConverter converter;

//     // Set the input and check if it's valid
//     converter.setInput(input);
//     if (!converter.isValid()) {
//         std::cout << "Invalid input argument. Cannot perform conversion." << std::endl;
//         return 1;
//     }

//     // Convert and print the values
//     converter.convert();
//     std::cout << converter;

//     return 0;
// }


int main( void ) {
    ScalarConverter scalar;
    std::string     input;
    
    std::cout << std::endl;
    std::cout << "/*----------My Conversion Tests----------*/" << std::endl;
    std::cout << std::endl;

    std::cout << "// Notation tests" << std::endl << std::endl;
    
    input = "0x2A";
    std::cout << "Input : " << input << std::endl;
    scalar.setInput(input);
    scalar.convert();
    std::cout << scalar << std::endl << std::endl;
    // scalar.reset();
    
    input = "042";
    std::cout << "Input : " << input << std::endl;
    scalar.setInput(input);
    scalar.convert();
    std::cout << scalar << std::endl << std::endl;
    // scalar.reset();

    std::cout << "// Char tests" << std::endl << std::endl;
   
    input = "zero";
    std::cout << "Input : " << input << std::endl;
    scalar.setInput(input);
    scalar.convert();
    std::cout << scalar << std::endl << std::endl;
    // scalar.reset();
    
    input = "z";
    std::cout << "Input : " << input << std::endl;
    scalar.setInput(input);
    scalar.convert();
    std::cout << scalar << std::endl << std::endl;
    // scalar.reset();
    
    input = (char)90;
    std::cout << "Input : " << input << std::endl;
    scalar.setInput(input);
    scalar.convert();
    std::cout << scalar << std::endl << std::endl;
    // scalar.reset();
    
    input = (char)127;
    std::cout << "Input : " << input << std::endl;
    scalar.setInput(input);
    scalar.convert();
    std::cout << scalar << std::endl << std::endl;
    // scalar.reset();

    std::cout << "// Int tests" << std::endl << std::endl;
    
    input = "0";
    std::cout << "Input : " << input << std::endl;
    scalar.setInput(input);
    scalar.convert();
    std::cout << scalar << std::endl << std::endl;
    // scalar.reset();
    
    input = "42";
    std::cout << "Input : " << input << std::endl;
    scalar.setInput(input);
    scalar.convert();
    std::cout << scalar << std::endl << std::endl;
    // scalar.reset();
    
    input = "-42";
    std::cout << "Input : " << input << std::endl;
    scalar.setInput(input);
    scalar.convert();
    std::cout << scalar << std::endl << std::endl;
    // scalar.reset();
    
    input = "2147483647";
    std::cout << "Input : " << input << std::endl;
    scalar.setInput(input);
    scalar.convert();
    std::cout << scalar << std::endl << std::endl;
    // scalar.reset();

    input = "2147483648";
    std::cout << "Input : " << input << std::endl;
    scalar.setInput(input);
    scalar.convert();
    std::cout << scalar << std::endl << std::endl;
    // scalar.reset();
    
    input = "-2147483648";
    std::cout << "Input : " << input << std::endl;
    scalar.setInput(input);
    scalar.convert();
    std::cout << scalar << std::endl << std::endl;
    // scalar.reset();

    std::cout << "// Float tests" << std::endl << std::endl;
    
    input = "0.0f";
    std::cout << "Input : " << input << std::endl;
    scalar.setInput(input);
    scalar.convert();
    std::cout << scalar << std::endl << std::endl;
    // scalar.reset();
    
    input = "4.2f";
    std::cout << "Input : " << input << std::endl;
    scalar.setInput(input);
    scalar.convert();
    std::cout << scalar << std::endl << std::endl;
    // scalar.reset();
    
    input = "-4.2f";
    std::cout << "Input : " << input << std::endl;
    scalar.setInput(input);
    scalar.convert();
    std::cout << scalar << std::endl << std::endl;
    // scalar.reset();

    input = "42.2f";
    std::cout << "Input : " << input << std::endl;
    scalar.setInput(input);
    scalar.convert();
    std::cout << scalar << std::endl << std::endl;
    // scalar.reset();
    
    input = "-42.2f";
    std::cout << "Input : " << input << std::endl;
    scalar.setInput(input);
    scalar.convert();
    std::cout << scalar << std::endl << std::endl;
    // scalar.reset();
    
    input = "nanf";
    std::cout << "Input : " << input << std::endl;
    scalar.setInput(input);
    scalar.convert();
    std::cout << scalar << std::endl << std::endl;
    // scalar.reset();
    
    input = "+inff";
    std::cout << "Input : " << input << std::endl;
    scalar.setInput(input);
    scalar.convert();
    std::cout << scalar << std::endl << std::endl;
    // scalar.reset();
    
    input = "-inff";
    std::cout << "Input : " << input << std::endl;
    scalar.setInput(input);
    scalar.convert();
    std::cout << scalar << std::endl << std::endl;
    // scalar.reset();

    std::cout << "// Double tests" << std::endl << std::endl;
    
    input = "0.0";
    std::cout << "Input : " << input << std::endl;
    scalar.setInput(input);
    scalar.convert();
    // std::cout << "Scalar type is : " << scalar.getType() << std::endl;
    std::cout << scalar << std::endl << std::endl;
    // scalar.reset();
    
    input = "4.2";
    std::cout << "Input : " << input << std::endl;
    scalar.setInput(input);
    scalar.convert();
    // std::cout << "Scalar type is : " << scalar.getType() << std::endl;
    std::cout << scalar << std::endl << std::endl;
    // scalar.reset();
    
    input = "-4.2";
    std::cout << "Input : " << input << std::endl;
    scalar.setInput(input);
    scalar.convert();
    // std::cout << "Scalar type is : " << scalar.getType() << std::endl;
    std::cout << scalar << std::endl << std::endl;
    // scalar.reset();

    input = "42.2";
    std::cout << "Input : " << input << std::endl;
    scalar.setInput(input);
    scalar.convert();
    // std::cout << "Scalar type is : " << scalar.getType() << std::endl;
    std::cout << scalar << std::endl << std::endl;
    // scalar.reset();

    input = "42.42";
    std::cout << "Input : " << input << std::endl;
    scalar.setInput(input);
    scalar.convert();
    // std::cout << "Scalar type is : " << scalar.getType() << std::endl;
    std::cout << scalar << std::endl << std::endl;
    // scalar.reset();
    
    input = "-42.2";
    std::cout << "Input : " << input << std::endl;
    scalar.setInput(input);
    scalar.convert();
    // std::cout << "Scalar type is : " << scalar.getType() << std::endl;
    std::cout << scalar << std::endl << std::endl;
    // scalar.reset();
    
    input = "nan";
    std::cout << "Input : " << input << std::endl;
    scalar.setInput(input);
    scalar.convert();
    std::cout << scalar << std::endl << std::endl;
    // scalar.reset();
    
    input = "+inf";
    std::cout << "Input : " << input << std::endl;
    scalar.setInput(input);
    scalar.convert();
    std::cout << scalar << std::endl << std::endl;
    // scalar.reset();
    
    input = "-inf";
    std::cout << "Input : " << input << std::endl;
    scalar.setInput(input);
    scalar.convert();
    std::cout << scalar << std::endl << std::endl;
    // scalar.reset();

    return (0);
}