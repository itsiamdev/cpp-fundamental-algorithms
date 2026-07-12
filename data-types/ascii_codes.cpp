#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Display ASCII codes for common characters in C++.
*/

int main() {
    cout << "Char\tASCII\tHex" << endl;
    cout << "-------------------" << endl;
    cout << "'A'\t" << (int)'A' << "\t0x" << hex << (int)'A' << endl;
    cout << "'a'\t" << dec << (int)'a' << "\t0x" << hex << (int)'a' << endl;
    cout << "'0'\t" << dec << (int)'0' << "\t0x" << hex << (int)'0' << endl;
    cout << "' '\t" << dec << (int)' ' << "\t0x" << hex << (int)' ' << endl;
    cout << "'\\n'\t" << dec << (int)'\n' << "\t0x" << hex << (int)'\n' << endl;
    cout << "'\\t'\t" << dec << (int)'\t' << "\t0x" << hex << (int)'\t' << endl;

    return 0;
}
