#include <iostream>
#include <fstream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Write text to a file in C++ using ofstream.
*/

int main() {
    ofstream fout("output.txt");

    if (!fout.is_open()) {
        cout << "Failed to open file." << endl;
        return 1;
    }

    fout << "Hello from C++ file I/O!" << endl;
    fout << "Line 2" << endl;
    fout << "Line 3" << endl;

    fout.close();

    cout << "Data written to output.txt" << endl;

    return 0;
}
