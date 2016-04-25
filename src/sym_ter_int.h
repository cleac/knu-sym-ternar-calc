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
        SymmetricalTernarInteger(const long val);

        /**
         * 64-bit unsigned integer initializer
         */
        SymmetricalTernarInteger(const unsigned long = 0);

        // String parsing conversion
        /**
         * Builder from string object
         */
        SymmetricalTernarInteger(const string&);


        /**
         * Set initializer for 64-bit unsigned integer
         */
        const SymmetricalTernarInteger& operator=(const unsigned long);
        /**
         * Set initializer for 64-bit unsigned integer
         */
        const SymmetricalTernarInteger& operator=(const unsigned long&);


        /**
         * Set initializer for 64-bit signed integer
         */
        const SymmetricalTernarInteger& operator=(const long);
        /**
         * Set initializer for 64-bit signed integer
         */
        const SymmetricalTernarInteger& operator=(const long&);


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
        operator char();
        operator char() const;

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
        const SymmetricalTernarInteger& operator+(const long) const;
        const SymmetricalTernarInteger& operator+(const SymmetricalTernarInteger&);
        const SymmetricalTernarInteger& operator+(const SymmetricalTernarInteger&) const;

        const SymmetricalTernarInteger& operator-(const long);
        const SymmetricalTernarInteger& operator-(const long) const;
        const SymmetricalTernarInteger& operator-(const SymmetricalTernarInteger&);
        const SymmetricalTernarInteger& operator-(const SymmetricalTernarInteger&) const;

        const SymmetricalTernarInteger& operator*(const long);
        const SymmetricalTernarInteger& operator*(const long) const;
        const SymmetricalTernarInteger& operator*(const SymmetricalTernarInteger&);
        const SymmetricalTernarInteger& operator*(const SymmetricalTernarInteger&) const;

        const SymmetricalTernarInteger& operator/(const long);
        const SymmetricalTernarInteger& operator/(const long) const;
        const SymmetricalTernarInteger& operator/(const SymmetricalTernarInteger&);
        const SymmetricalTernarInteger& operator/(const SymmetricalTernarInteger&) const;

        const unsigned char MAXGRADE = MAX_GRADE;
    private:
        SymmetricalTernarDigit value[MAX_GRADE];
    };
}

typedef CustomNumbers::SymmetricalTernarInteger ter_int;

#endif
