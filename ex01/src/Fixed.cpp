#include "../includes/Fixed.hpp"
#include <iostream>
#include <cmath>

const int Fixed::_bits = 8;

Fixed::Fixed() {
    std::cout << "Constructor called." << std::endl;
    this->_fixed_point = 0;
}

Fixed::Fixed(const int integer_value) {
    std::cout << "Int constructor called." << std::endl;
    this->_fixed_point = integer_value << _bits;
}

Fixed::Fixed(const float float_value) {
    std::cout << "Float constructor called." << std::endl;
    this->_fixed_point = roundf(float_value * (1 << _bits));
}

Fixed::~Fixed() {
    std::cout << "Destructor called." << std::endl;
}

Fixed::Fixed(const Fixed &copy) {
    std::cout << "Copy constructor called." << std::endl;
    this->_fixed_point = copy._fixed_point;
}

Fixed& Fixed::operator=(const Fixed &copy) {
    std::cout << "Copy assignment constructor called." << std::endl;
    if (this != &copy)
        this->_fixed_point = copy._fixed_point;
    return *this;
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called." << std::endl;
    this->_fixed_point = raw;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called." << std::endl;
    return this->_fixed_point;
}

float Fixed::toFloat() const {
    return this->_fixed_point / (float)(1 << _bits);
}

int Fixed::toInt() const {
    return this->_fixed_point >> _bits;
}

std::ostream& operator<<(std::ostream &stream, const Fixed &_fixed_point) {
    stream << _fixed_point.toFloat();
    return stream;
}