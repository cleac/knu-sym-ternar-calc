#include <iostream>
#include "sym_ter_int.h"

using namespace std;

int main(int argc, char *argv[])
{
    const int iteraton_size = 10;

    cout << "Testing conversion from int to ternar" << endl;
    for (int i = 0; i < iteraton_size; i+=1){
        const CustomNumbers::SymmetricalTernarInteger val(i);
        cout << i << " in ternar equals " << string(val) << endl;
    }

    cout << "Testing conversion from ternar to int" << endl;

    for (int i = 0; i < iteraton_size; i += 1)
    {
        CustomNumbers::SymmetricalTernarInteger a = i;
        cout << "Ternar number " << string(a) << " is decimal " << int(a) << endl;
    }

    cout << "Testing calculations" << endl;
    cout << "=====================> +" << endl;
    for (int i = 0; i < iteraton_size; i += 1)
    {
        CustomNumbers::SymmetricalTernarInteger tmp(i);
        CustomNumbers::SymmetricalTernarInteger one(i);
        CustomNumbers::SymmetricalTernarInteger second(iteraton_size - i);
        auto sum = one + second;
        cout << string(tmp) << " (" << int(tmp) << ")" <<
            "\t+\t" << string(second) << " (" << int(second) << ")" << " is\t" <<
            string(sum) << " (" << int(sum) << ")" << endl;
    }

    cout << "=====================> -" << endl;
    for (int i = 0; i < iteraton_size; i += 1)
    {
        CustomNumbers::SymmetricalTernarInteger tmp(i);
        CustomNumbers::SymmetricalTernarInteger one(i);
        CustomNumbers::SymmetricalTernarInteger second(iteraton_size - i);
        auto sum = one - second;
        cout << string(tmp) << " (" << int(tmp) << ")" <<
            "\t-\t" << string(second) << " (" << int(second) << ")" << " is\t" <<
            string(sum) << " (" << int(sum) << ")" << endl;
    }

    cout << "=====================> *" << endl;
    for (int i = 0; i < iteraton_size; i += 1)
    {
        CustomNumbers::SymmetricalTernarInteger tmp(i);
        CustomNumbers::SymmetricalTernarInteger one(i);
        CustomNumbers::SymmetricalTernarInteger second(iteraton_size - i);
        auto sum = one * second;
        cout << string(tmp) << " (" << int(tmp) << ")" <<
            "\t*\t" << string(second) << " (" << int(second) << ")" << " is\t" <<
            string(sum) << " (" << int(sum) << ")" << endl;
    }

    cout << "=====================> /" << endl;
    for (int i = 0; i < iteraton_size; i += 1)
    {
        CustomNumbers::SymmetricalTernarInteger tmp(i);
        CustomNumbers::SymmetricalTernarInteger one(i);
        CustomNumbers::SymmetricalTernarInteger second(iteraton_size - i);
        auto sum = one / second;
        cout << string(tmp) << " (" << int(tmp) << ")" <<
            "\t/\t" << string(second) << " (" << int(second) << ")" << " is\t" <<
            string(sum) << " (" << int(sum) << ")" << endl;
    }

    return 0;
}
