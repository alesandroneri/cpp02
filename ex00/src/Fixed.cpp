#include "../includes/Fixed.hpp"
#include <iostream>

const int Fixed::bites = 8;

//Orthodox Canonical Form constructor, destructor, copy, copy assignment
//constructor
Fixed::Fixed(){
    std::cout << "Constructor called\n";
    this->_number_value = 0;
}

//destructor
Fixed::~Fixed() {
    std::cout << "Destructor called\n";

}

//copy constructor
Fixed::Fixed(const Fixed &other) {
    std::cout << "Copy constructor called\n";
    this->_number_value = other._number_value;

}

//copy assignment
Fixed& Fixed::operator=(const Fixed &other) {
    std::cout << "Copy assignment constructor called\n";
    if (this != &other) {
        this->_number_value = other._number_value;
    }
    return *this;
}