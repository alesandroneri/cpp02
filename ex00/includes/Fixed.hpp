#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
    private:
        int _fixed_point;
        static const int _bits;
    public:

        // canonical form
        Fixed();
        ~Fixed();
        Fixed(const Fixed &copy);
        Fixed &operator=(const Fixed &copy);

        // getter
        int getRawBits( void ) const;

        // setter
        void setRawBits( int const raw );

};

#endif