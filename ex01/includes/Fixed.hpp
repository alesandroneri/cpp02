#ifndef FIXED_HPP
#define FIXED_HPP

#include <ostream>

class Fixed {
    private:
        int _fixed_point;
        static const int _bits;
    public:
        // canonical form
        Fixed();
        Fixed(const int integer_value);
        Fixed(const float float_value);
        ~Fixed();
        Fixed(const Fixed &copy);
        Fixed &operator=(const Fixed &copy);

        // getter
        int getRawBits( void ) const;

        // setter
        void setRawBits( int const raw );

        // other methods
        float toFloat( void ) const;
        int toInt( void ) const;

};

std::ostream& operator<<(std::ostream &stream, const Fixed &_fixed_point);

#endif