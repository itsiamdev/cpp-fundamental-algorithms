#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Demonstrate the use of integer data types in C++.
    Print sizes and sample values for int, short, long, and long long.
*/

int main() {
    int a = 10;
    short b = 5;
    long c = 1000000;
    long long d = 10000000000;

    cout << "int: " << a << " | size: " << sizeof(a) << " bytes" << endl;
    cout << "short: " << b << " | size: " << sizeof(b) << " bytes" << endl;
    cout << "long: " << c << " | size: " << sizeof(c) << " bytes" << endl;
    cout << "long long: " << d << " | size: " << sizeof(d) << " bytes" << endl;

    return 0;
}
