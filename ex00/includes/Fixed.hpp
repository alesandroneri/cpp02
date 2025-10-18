#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
    private:
        int _fixed_point;
        static const int _bits;
    public:
        //constructor
        Fixed();
        //destructor
        ~Fixed();
        //copy constructor
        Fixed(const Fixed &copy);
        //copy assignment
        Fixed &operator=(const Fixed &copy);
        int getRawBits( void ) const;
        void setRawBits( int const raw );

};

#endif