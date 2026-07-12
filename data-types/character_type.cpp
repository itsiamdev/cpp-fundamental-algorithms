#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Demonstrate the use of the character data type in C++.
    Print size and ASCII values for char literals.
*/

int main() {
    char c1 = 'A';
    char c2 = 'B';
    char c3 = '1';

    cout << "char: " << c1 << " | ASCII: " << (int)c1 << " | size: " << sizeof(c1) << " bytes" << endl;
    cout << "char: " << c2 << " | ASCII: " << (int)c2 << " | size: " << sizeof(c2) << " bytes" << endl;
    cout << "char: " << c3 << " | ASCII: " << (int)c3 << " | size: " << sizeof(c3) << " bytes" << endl;

    return 0;
}
