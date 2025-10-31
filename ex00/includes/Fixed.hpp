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

        // getters
        int getRawBits( void ) const;

        // setters
        void setRawBits( int const raw );

};

#endif