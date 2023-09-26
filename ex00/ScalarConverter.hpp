/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <aherbet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:14:04 by antoineherb       #+#    #+#             */
/*   Updated: 2023/08/09 17:29:26 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <iomanip>
#include <sstream>
#include <cstdlib>
#include <string>
#include <cctype>
#include <climits>
#include <cmath>

enum eTypes { NONE, CHAR, INT, FLOAT, DOUBLE };

class ScalarConverter
{
    private:
        // private member attributes
        std::string     _input;
        eTypes          _iType;
        char            _c;
        int             _i;
        float           _f;
        double          _d;
        bool            _typeset;
        // private member functions
    public:
        // constructors
        ScalarConverter( void );
        ScalarConverter( ScalarConverter const &src);
        // destructor
        ~ScalarConverter( void );
        // operators overload
        ScalarConverter&    operator=( ScalarConverter const &src);
        // getter, setter
        char                getChr( void ) const;
        void                setChr( char c );
        int                 getInt( void ) const;
        void                setInt( int i );
        float               getFlt( void ) const;
        void                setFlt( float f );
        double              getDbl( void ) const;
        void                setDbl( double d );
        std::string         getInput( void ) const;
        eTypes              getType( void ) const;
        // ScalarConverter&    reset( void );
        // public member functions
        bool    isChr( void );
        bool    isInt( void );
        bool    isFlt( void );
        bool    isDbl( void );
        void    printChr( void );
        void    printInt( void );
        void    printFlt( void );
        void    printDbl( void );
        bool    isOctal( void );
        bool    isHex( void );
        bool    isValid( void );
        bool    checkPseudoLiteral( void );
        bool    isFloatString(const std::string& str);
        void    setType( void );
        void    setInput( std::string input );
        void    convert( void );
        // exception classes
        class ImpossibleTCException : public std::exception {
            public:
                virtual const char* what() const throw() { 
                    return "[ERROR] impossible type conversion";
                }
        };
        class InvalidPrintException : public std::exception {
            public:
                virtual const char* what() const throw() { 
                    return "[WARNING] non displayable value";
                }
        };
        class InvalidInputException : public std::exception {
            public:
                virtual const char* what() const throw() { 
                    return "[ERROR] invalid input type (decimal only)";
                }
        };
        class PseudoLiteralException : public std::exception {
            public:
                virtual const char* what() const throw() { 
                    return "[WARNING] pseudo literal value";
                }
        };
        class IntConversionOverflowException : public std::exception {
        public:
            virtual const char* what() const throw() {
                return "[ERROR] integer conversion overflow";
            }
        };
};

std::ostream&   operator<<( std::ostream& os, ScalarConverter &rhs );

#endif