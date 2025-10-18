#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
    private:
        static const int _bits;
        int _fixed_point;
    public:
        Fixed();
        Fixed(const int integer_value);
        Fixed(const float float_value);
        ~Fixed();
        Fixed(const Fixed &copy);
        Fixed &operator=(const Fixed &copy);
        void setRawBits( int const raw );
        int getRawBits(void ) const;
        float toFloat( void ) const;
        int toInt( void ) const ;
};

#endif