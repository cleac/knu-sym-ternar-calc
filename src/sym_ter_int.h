#ifndef SYMM_TER_INT_H
#define SYMM_TER_INT_H

#include <iostream>
#include <stdint.h>
#define MAX_GRADE 16

using namespace std;


namespace CustomNumbers
{
    enum SymmetricalTernarDigit
    {
        one=1, zero=0, min_one=-1, None=-2
    };

    class SymmetricalTernarInteger
    {
    public:
        /**
         * 64-bit signed integer initializer
         */
        SymmetricalTernarInteger(const long);

        /**
         * 64-bit unsigned integer initializer
         */
        SymmetricalTernarInteger(const unsigned long = 0);

        /**
         * 32-bit signed integer initializer
         */
        SymmetricalTernarInteger(const int);

        /**
         * 32-bit unsigned integer initializer
         */
        SymmetricalTernarInteger(const unsigned int);

        /**
         * Copy constructor
         */
        SymmetricalTernarInteger(const SymmetricalTernarInteger& val);
        SymmetricalTernarInteger(const SymmetricalTernarInteger* val);

        /**
         * Caster for beatiful displayment of type
         * @return beautiful representation of value
         */
        operator string();
        operator string() const;

        /**
         * Caster for 32(64)-bit int
         * @return decimal integer representation of value
         */
        operator int();
        operator int() const;

        /**
         * Caster for 32(64)-bit int
         * @return decimal integer representation of value
         */
        operator long();
        operator long() const;

        const SymmetricalTernarInteger& operator+(const long);
        const SymmetricalTernarInteger& operator+(const SymmetricalTernarInteger&);

        const SymmetricalTernarInteger& operator-(const long);
        const SymmetricalTernarInteger& operator-(const SymmetricalTernarInteger&);

        const SymmetricalTernarInteger& operator*(const long);
        const SymmetricalTernarInteger& operator*(const SymmetricalTernarInteger&);

        const SymmetricalTernarInteger& operator/(const long);
        const SymmetricalTernarInteger& operator/(const SymmetricalTernarInteger&);
    private:
        SymmetricalTernarDigit value[MAX_GRADE];

        void update(const SymmetricalTernarInteger& val);
    };
}

typedef CustomNumbers::SymmetricalTernarInteger ter_int;

#endif
