#ifndef SYMBOL
#define SYMBOL value
#include <iostream>

using namespace std;

namespace CustomNumbers
{
    class SymmetricalTernarInteger
    {
    public:
        // Default initializer (with 0)
        SymmetricalTernarInteger();

        // Signed type conversions
        SymmetricalTernarInteger(char);
        SymmetricalTernarInteger(int);
        SymmetricalTernarInteger(long long);

        // Unsigned type conversions
        SymmetricalTernarInteger(unsigned char);
        SymmetricalTernarInteger(unsigned int);
        SymmetricalTernarInteger(unsigned long long);

        // String parsing conversion
        SymmetricalTernarInteger(string);

        // Setter constructor

        const SymmetricalTernarInteger& operator=(unsigned char);
        const SymmetricalTernarInteger& operator=(unsigned char&);

        const SymmetricalTernarInteger& operator=(unsigned int);
        const SymmetricalTernarInteger& operator=(unsigned int&);

        const SymmetricalTernarInteger& operator=(unsigned long long);
        const SymmetricalTernarInteger& operator=(unsigned long long&);


        const SymmetricalTernarInteger& operator=(char);
        const SymmetricalTernarInteger& operator=(char&);

        const SymmetricalTernarInteger& operator=(int);
        const SymmetricalTernarInteger& operator=(int&);

        const SymmetricalTernarInteger& operator=(long long);
        const SymmetricalTernarInteger& operator=(long long&);

        operator string();

        ///////////////////////////
        // Calculation variables //
        ///////////////////////////

        const SymmetricalTernarInteger& operator+(int);
        const SymmetricalTernarInteger& operator+(int) const;

        const SymmetricalTernarInteger& operator-(int);
        const SymmetricalTernarInteger& operator-(int) const;

        const SymmetricalTernarInteger& operator*(int);
        const SymmetricalTernarInteger& operator*(int) const;

        const SymmetricalTernarInteger& operator/(int);
        const SymmetricalTernarInteger& operator/(int) const;
    private:
        unsigned long long value;
    };
}

typedef CustomNumbers::SymmetricalTernarInteger ter_int;

#endif
