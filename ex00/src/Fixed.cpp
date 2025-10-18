#include "../includes/Fixed.hpp"
#include <iostream>

const int Fixed::_bits = 8;

//Orthodox Canonical Form constructor, destructor, copy, copy assignment
//constructor
Fixed::Fixed(){
    std::cout << "Constructor called\n";
    this->_fixed_point = 0;
}

//destructor
Fixed::~Fixed() {
    std::cout << "Destructor called\n";

}

//copy constructor
Fixed::Fixed(const Fixed &copy) {
    std::cout << "Copy constructor called\n";
    this->_fixed_point = copy._fixed_point;

}

//copy assignment
Fixed& Fixed::operator=(const Fixed &copy) {
    std::cout << "Copy assignment constructor called\n";
    if (this != &copy) {
        this->_fixed_point = copy._fixed_point;
    }
    return *this;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixed_point;
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixed_point = raw;
}