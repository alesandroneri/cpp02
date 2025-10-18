#include "../includes/Fixed.hpp"
#include <cmath>

const int Fixed::_bits = 8;

Fixed::Fixed() {

}

Fixed::Fixed(const int integer_value) {
    this->_fixed_point = integer_value << _bits;
}

Fixed::Fixed(const float float_value) {
    this->_fixed_point = roundf(float_value * (1 << _bits));
}

Fixed::~Fixed() {

}

Fixed::Fixed(const Fixed &copy) {
    this->_fixed_point = copy._fixed_point;
}

Fixed &Fixed::operator=(const Fixed &copy) {
    if(this != &copy)
        this->_fixed_point = copy._fixed_point;
    return *this;
}

void Fixed::setRawBits(int const raw) {
    this->_fixed_point = raw;
}

int Fixed::getRawBits() const {
    return this->_fixed_point;
}

int Fixed::toInt() const {
    return this->_fixed_point >> _bits;
}

float Fixed::toFloat() const {
    return this->_fixed_point / float(1 << _bits);
}