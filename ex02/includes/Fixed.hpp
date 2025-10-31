#ifndef FIXED_HPP
#define FIXED_HPP

#include <ostream>

class Fixed {
    private:
        static const int _bits;
        int _fixed_point;
    public:
        // canonical Form
        Fixed();
        ~Fixed();
        Fixed(const Fixed &copy);
        Fixed &operator=(const Fixed &copy);

        // constructors with values
        Fixed(const float float_value);
        Fixed(const int integer_value);

        // getters
        int getRawBits(void ) const;

        // setters
        void setRawBits( int const raw );

        // comparison operators overload
        bool operator>(const Fixed &other) const ;
        bool operator>=(const Fixed &other) const ;
        bool operator<(const Fixed &other) const ;
        bool operator<=(const Fixed &other) const ;
        bool operator==(const Fixed &other) const ;
        bool operator!=(const Fixed &other) const ;

        // arithmetical operators overload
        Fixed operator+(const Fixed &other) const ;
        Fixed operator-(const Fixed &other) const ;
        Fixed operator*(const Fixed &other) const ;
        Fixed operator/(const Fixed &other) const ;

        // increment and decrement overload
        Fixed &operator++();
        Fixed operator++( int );
        Fixed &operator--();
        Fixed operator--( int );
    

        // methods that converts value
        float toFloat( void ) const;
        int toInt( void ) const ;

        // methods that gets the minimum value
        static Fixed &min(Fixed &value1, Fixed &value2);
        static const Fixed &min(const Fixed &value1, const Fixed &value2);

        // methods that gets the maximum value
        static Fixed &max(Fixed &value1, Fixed &value2);
        static const Fixed &max(const Fixed &value1, const Fixed &valu2);
};

std::ostream& operator<<(std::ostream &stream, const Fixed &_fixed_point);

#endif