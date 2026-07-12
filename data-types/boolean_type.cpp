#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Demonstrate the use of the boolean data type in C++.
    Print size and values for bool variables.
*/

int main() {
    bool t = true;
    bool f = false;

    cout << "bool true: " << t << " | size: " << sizeof(t) << " bytes" << endl;
    cout << "bool false: " << f << " | size: " << sizeof(f) << " bytes" << endl;

    return 0;
}
