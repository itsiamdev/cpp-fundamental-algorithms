#include <iostream>
#include <fstream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Read text from a file in C++ using ifstream.
*/

int main() {
    ifstream fin("output.txt");

    if (!fin.is_open()) {
        cout << "Failed to open file." << endl;
        return 1;
    }

    string line;
    while (getline(fin, line)) {
        cout << line << endl;
    }

    fin.close();

    return 0;
}
