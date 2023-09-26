/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <aherbet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:14:01 by antoineherb       #+#    #+#             */
/*   Updated: 2023/08/09 17:34:57 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter( void ): _c('\0'), _i(0), _f(0.0f), _d(0.0) {
    this->_typeset = false;
    return;
}

ScalarConverter::ScalarConverter( ScalarConverter const &src) {
    *this = src;
    return;
}

ScalarConverter::~ScalarConverter( void ) {
    return;
}

ScalarConverter&    ScalarConverter::operator=( ScalarConverter const &src) {
    if (this != &src) {
        // this->_input = src.getInput();
        // this->_iType = src.getType();
        this->_c = src.getChr();
        this->_i = src.getInt();
        this->_f = src.getFlt();
        // this->_d = src.getDbl();
        // this->_typeset = src._typeset;
    }
    return (*this);
}

char    ScalarConverter::getChr( void ) const {
    return (this->_c);
}

void    ScalarConverter::setChr( char c ) {
    this->_c = c;
    return;
}

int     ScalarConverter::getInt( void ) const {
    return (this->_i);
}

void    ScalarConverter::setInt( int i ) {
    this->_i = i;
    return;
}

float   ScalarConverter::getFlt( void ) const {
    return (this->_f);
}

void    ScalarConverter::setFlt( float f ) {
    this->_f = f;
    return;
}

double  ScalarConverter::getDbl( void ) const {
    return (this->_d);
}

void    ScalarConverter::setDbl( double d ) {
    this->_d = d;
    return;
}

std::string     ScalarConverter::getInput( void ) const {
    return (this->_input);
}

eTypes      ScalarConverter::getType( void ) const {
    return (this->_iType);
}

// ScalarConverter&     ScalarConverter::reset( void ) {
//     this->_input = "";
//     this->_c = '\0';
//     this->_i = 0;
//     this->_f = 0.0f;
//     this->_d = 0.0;
//     this->_typeset = false;
//     return (*this);
// }

bool    ScalarConverter::checkPseudoLiteral( void ) {
    return (_input == "nan" || _input == "nanf" || _input == "+inf"
            || _input == "+inff" || _input == "-inf" || _input == "-inff");
}

bool    ScalarConverter::isChr( void ) {
    try {    
        if (_input.length() != 1
            || isalpha(static_cast<unsigned char>(_input[0])) == 0
            || isprint(static_cast<unsigned char>(_input[0])) == 0)
            throw ImpossibleTCException();
    }
    catch (ImpossibleTCException &e) {
        // std::cout << e.what() << " : invalid char type" << std::endl;
        return (false);
    }
    return (true);
}

bool    ScalarConverter::isInt( void ) {
    try {
        if (_input.empty())
            throw ImpossibleTCException();
        size_t startIdx = 0;
        if (_input[0] == '-' || _input[0] == '+')
            startIdx++;
        if (_input.length() == startIdx)
            throw ImpossibleTCException();
        if (_input.find('.') != std::string::npos)
            throw ImpossibleTCException();
        for (size_t i = startIdx; i < _input.length(); i++) {
            if (!std::isdigit(_input[i]))
                throw ImpossibleTCException();
        }
    } 
    catch (ImpossibleTCException &e) {
        // std::cout << e.what() << " : invalid int type" << std::endl;
        return false;
    }
    catch (IntConversionOverflowException &e) {
        std::cout << e.what() << " : int conversion overflow" << std::endl;
        return false;
    }
    catch (std::exception &e) {
        std::cout << "[ERROR] " << e.what() << std::endl;
        return false;
    }
    return true;
}

bool    ScalarConverter::isFloatString(const std::string& str) {
    for (size_t i = 0; i < str.length(); i++) {
        char c = str[i];
        if (!std::isdigit(c) && c != '.' && c != '+' && c != '-') {
            return false;
        }
    }
    return true;
}

bool    ScalarConverter::isFlt( void ) {
    try {
        if (_input[_input.length() - 1] != 'f')
            throw ImpossibleTCException();

        std::string floatPart = _input.substr(0, _input.length() - 1);
        size_t dotCount = 0;
        for (size_t i = 0; i < floatPart.length(); ++i) {
            if (floatPart[i] == '.') {
                dotCount++;
            }
        }
        if (dotCount != 1 || !isFloatString(floatPart)) {
            throw ImpossibleTCException();
        }
    } catch (ImpossibleTCException &e) {
        // std::cout << e.what() << " : invalid float type" << std::endl;
        return false;
    }
    return true;
}

bool    ScalarConverter::isDbl( void ) {
    try {
        std::string doublePart = _input.substr(0, _input.length() - 1);
        size_t dotCount = 0;
        for (size_t i = 0; i < doublePart.length(); ++i) {
            if (doublePart[i] == '.') {
                dotCount++;
            }
        }
        if (dotCount != 1 || !isFloatString(doublePart)) {
            throw ImpossibleTCException();
        }
    } catch (ImpossibleTCException &e) {
        // std::cout << e.what() << " : invalid double type" << std::endl;
        return false;
    }
    return true;
}

void    ScalarConverter::printChr( void ) {
    try {
        if (checkPseudoLiteral())
            throw ImpossibleTCException();
        else if (_d > CHAR_MAX || _d < CHAR_MIN)
            throw ImpossibleTCException();
        else if (!isprint(static_cast<unsigned char>(_c)))
            throw InvalidPrintException();
        else
            std::cout << "'" << static_cast<char>(round(_d)) << "'";
    }
    catch (ImpossibleTCException &e) {
        std::cout << e.what() << " : impossible char value";
    }
    catch (InvalidPrintException &e) {
        std::cout << e.what() << " : char is not printable ASCII";
    }
    std::cout << std::endl;
    return;
}

void    ScalarConverter::printInt( void ) {
    try {
        if (checkPseudoLiteral())
            throw ImpossibleTCException();
        else if (strtod(_input.c_str(), NULL) > INT_MAX || strtod(_input.c_str(), NULL) < INT_MIN)
            throw IntConversionOverflowException();
        else
            std::cout << _i;
    }
    catch (ImpossibleTCException &e) {
        std::cout << e.what() << " : impossible int value";
    }
    catch (IntConversionOverflowException &e) {
        std::cout << e.what() << " : int conversion overflow";
    }
    std::cout << std::endl;
    return;
}

void    ScalarConverter::printFlt( void ) {
    if (checkPseudoLiteral()) {
        std::cout << _input;
    } else
        std::cout << std::fixed << std::setprecision(1) << _f << "f";
    std::cout << std::endl;
}

void    ScalarConverter::printDbl( void ) {
    if (checkPseudoLiteral()) {
        std::cout << _input;
    } else
        std::cout << std::fixed << std::setprecision(1) << _d;
    std::cout << std::endl;
}

bool    ScalarConverter::isOctal( void ) {
    return ((_input.length() > 1 && _input[0] == '0'
            && isdigit(static_cast<unsigned char>(_input[1]))) ? true : false);
}

bool    ScalarConverter::isHex( void ) {
    return ((_input.length() > 1 && _input[0] == '0' 
            && tolower(static_cast<unsigned char>(_input[1])) == 'x') ? true : false);
}

bool    ScalarConverter::isValid( void ) {
    try {
        if (_input.empty())
            return (false);
        if (checkPseudoLiteral()) {
            throw PseudoLiteralException();
        }
        std::string::const_iterator it = _input.begin();
        while (it != _input.end() && (isalnum(static_cast<unsigned char>(*it)) != 0 
            || *it == '.' || *it == '+' || *it == '-')) {
            if ((isHex() && !isOctal()) || (!isHex() && isOctal()))
                return (false);
            it++;
        }
    }
    catch (PseudoLiteralException &e) {
        std::cout << e.what() << std::endl;
        return (true);
    }
    return (true);
}

void        ScalarConverter::setType( void ) {
    try {
        if (isChr())
            _iType = CHAR;
        else if (isInt())
            _iType = INT;
        else if (isFlt())
            _iType = FLOAT;
        else if (isDbl())
            _iType = DOUBLE;
        else
            _iType = NONE;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    _typeset = true;
    return;
}

void        ScalarConverter::setInput( std::string input ) {
    try {
        this->_input = input;
        if (!isValid())
            throw InvalidInputException();
        else {
            this->setType();
            if ( !this->getType() || this->getType() == NONE )
                throw ImpossibleTCException();
        }
    }
    catch (InvalidInputException &e) {
        std::cout << e.what() << std::endl;
    }
    catch (ImpossibleTCException &e) {
        std::cout << e.what() << " : invalid type" << std::endl;
    }
    return;
}

void    ScalarConverter::convert ( void ) {
    try {
        if (_typeset == false)
            throw ImpossibleTCException();
        else {
            try {
                switch (_iType) {
                    case CHAR:
                        _c = _input[0];
                        _i = static_cast<int>(_c);
                        _f = static_cast<float>(_c);
                        _d = static_cast<double>(_c);
                        break;
                    case INT:
                        _i = atoi(_input.c_str());
                        _f = static_cast<float>(_i);
                        _d = static_cast<double>(_i);
                        _c = static_cast<char>(_i);
                        break;
                    case FLOAT:
                        _f = atof(_input.c_str());
                        _d = static_cast<double>(_f);
                        _c = static_cast<char>(_f);
                        _i = static_cast<int>(_f);
                        break;
                    case DOUBLE:
                        _d = strtod(_input.c_str(), NULL);
                        _c = static_cast<char>(_d);
                        _i = static_cast<int>(_d);
                        _f = static_cast<float>(_d);
                        break;
                    default:
                        break;
                }
            }
            catch (std::exception &e) {
                // std::cout << "[ERROR] " << e.what() << std::endl;
            }
        }
    }
    catch (ImpossibleTCException &e) {
        std::cout << e.what() << " : type not set" << std::endl;
    }
    return;
}

std::ostream&   operator<<( std::ostream& os, ScalarConverter &rhs ) {
    os << "char : "; rhs.printChr();
    os << "int : "; rhs.printInt();
    os << "float : "; rhs.printFlt();
    os << "double : "; rhs.printDbl();
    return (os);
}