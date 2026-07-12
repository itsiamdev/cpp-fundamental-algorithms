#include <iostream>
#include <fstream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Read and write text to a file in C++ using fstream.
*/

int main() {
    fstream file("data.txt", ios::in | ios::out | ios::trunc);

    if (!file.is_open()) {
        cout << "Failed to open file." << endl;
        return 1;
    }

    file << "First line" << endl;
    file << "Second line" << endl;
    file << "Third line" << endl;

    file.seekg(0);

    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();

    return 0;
}
