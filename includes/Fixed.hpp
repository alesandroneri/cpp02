#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
    private:
        int _number_value;
        static const int bites;
    public:
        //constructor
        Fixed();
        //destructor
        ~Fixed();
        //copy constructor
        Fixed(const Fixed &other);
        //copy assignment
        Fixed &operator=(const Fixed &other);
        int getRawBits( void ) const;
        void setRawBits( int const raw );

};

#endif