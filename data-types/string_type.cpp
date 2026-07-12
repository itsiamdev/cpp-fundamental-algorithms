#include <iostream>
#include <string>
using namespace std;

/*
    PROBLEM STATEMENT:

    Demonstrate the use of the string data type in C++.
    Print size and sample string values using std::string.
*/

int main() {
    string s1 = "Hello";
    string s2 = "C++";

    cout << "string 1: " << s1 << " | size: " << s1.size() << " chars" << endl;
    cout << "string 2: " << s2 << " | size: " << s2.size() << " chars" << endl;

    return 0;
}
