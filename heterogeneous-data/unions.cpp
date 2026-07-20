#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Unions in C++.
    A union shares the same memory location for all its members,
    so only one member can hold a valid value at a time.
    Useful when the exact data type is not known in advance
    or when memory saving is critical.
*/

union Variant {
    int integer;
    double real;
    char character;
};

int main() {
    Variant v;

    v.integer = 42;
    cout << "integer = " << v.integer << endl;

    v.real = 3.14;
    cout << "real = " << v.real << endl;

    v.character = 'A';
    cout << "character = " << v.character << endl;

    return 0;
}
