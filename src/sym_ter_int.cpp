#include "sym_ter_int.h"
#include <cmath>
#include <exception>

typedef unsigned long ulong;

namespace CustomNumbers {

    SymmetricalTernarInteger::SymmetricalTernarInteger(const long val):
        SymmetricalTernarInteger(ulong(abs(val)))
    {}

    SymmetricalTernarInteger::SymmetricalTernarInteger(const ulong val)
    {
        if (val == 0)
            for (int i = 0; i < MAXGRADE; ++i)
                this->value[i] = SymmetricalTernarDigit::zero;

        unsigned long v = val;
        unsigned char current_grade = 0;
        while (current_grade < MAXGRADE) {
            int r = v % 3;
            if (r == 0)
                this->value[current_grade] = SymmetricalTernarDigit::zero;
            else if (r == 1)
                this->value[current_grade] = SymmetricalTernarDigit::one;
            else {
                this->value[current_grade] = SymmetricalTernarDigit::min_one;
                ++v;
            }
            v /= 3;
            ++current_grade;
        }
    }

    SymmetricalTernarInteger::operator string() {
        std::string result = std::string("");
        bool first_non_null_digit = true;
        for (int i = MAX_GRADE - 1; i >= 0; i-=1) {
            switch (this->value[i]) {
                case SymmetricalTernarDigit::one:
                    result += "1";
                    first_non_null_digit = false;
                    break;
                case SymmetricalTernarDigit::zero:
                    if (!first_non_null_digit || i == 0)
                        result += "0";
                    break;
                case SymmetricalTernarDigit::min_one:
                    result += "T";
                    first_non_null_digit = false;
                    break;
            }
        }
        return result;
    }

}
