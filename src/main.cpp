#include <iostream>
#include "sym_ter_int.h"

using namespace std;

int main(int argc, char *argv[])
{
    for (int i = 0; i < 100000; i+=100){
        auto val = CustomNumbers::SymmetricalTernarInteger(long(i));
        cout << i << " in ternar equals " << string(val) << endl;
    }

    return 0;
}
