#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Codul ASCII (ASCII codes).
    Display the ASCII codes for common printable characters and
    iterate over a small range of the ASCII table to show the mapping
    between characters and their numeric codes.
*/

int main() {
    // ASCII codes of a few representative characters
    cout << "Char\tASCII" << endl;
    cout << "'A'\t" << (int)'A' << endl;
    cout << "'a'\t" << (int)'a' << endl;
    cout << "'0'\t" << (int)'0' << endl;
    cout << "' '\t" << (int)' ' << endl;
    cout << "'\\n'\t" << (int)'\n' << endl;

    // print the printable ASCII table (codes 33..126)
    cout << "\nPrintable ASCII table:" << endl;
    for (int code = 33; code <= 126; code++) {
        cout << (char)code << " = " << code << endl;
    }

    return 0;
}
