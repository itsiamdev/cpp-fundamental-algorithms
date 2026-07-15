#include <iostream>
#include <string>
using namespace std;

/*
    PROBLEM STATEMENT:

    Siruri de caractere C++ (C++ strings).
    Demonstrate the std::string type and its most common operations:
    concatenation, length, access by index, comparison, substrings
    and iteration over the characters.
*/

int main() {
    string s1 = "Hello";
    string s2 = "World";

    // concatenation
    string s3 = s1 + " " + s2;
    cout << "Concatenated: " << s3 << endl;

    // length / size
    cout << "Length: " << s3.length() << " characters" << endl;

    // access characters by index
    cout << "First char: " << s3[0] << endl;

    // comparison
    if (s1 != s2) {
        cout << "\"" << s1 << "\" != \"" << s2 << "\"" << endl;
    }

    // substring (from index 0, length 5)
    cout << "Substring: " << s3.substr(0, 5) << endl;

    // iterate over the characters
    cout << "Characters: ";
    for (char c : s3) {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}
