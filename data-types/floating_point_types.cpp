#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Demonstrate the use of floating-point data types in C++.
    Print sizes and sample values for float, double, and long double.
*/

int main() {
    float a = 3.14f;
    double b = 3.1415926535;
    long double c = 3.14159265358979323846L;

    cout << "float: " << a << " | size: " << sizeof(a) << " bytes" << endl;
    cout << "double: " << b << " | size: " << sizeof(b) << " bytes" << endl;
    cout << "long double: " << c << " | size: " << sizeof(c) << " bytes" << endl;

    return 0;
}
