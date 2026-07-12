#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <string>
#include <climits>
#include <cfloat>
using namespace std;

/*
    PROBLEM STATEMENT:

    Demonstrate commonly used predefined functions from the C++ standard library.
*/

int main() {
    cout << "=== Math <cmath> ===" << endl;
    cout << "sqrt(16) = " << sqrt(16) << endl;
    cout << "pow(2, 3) = " << pow(2, 3) << endl;
    cout << "abs(-7) = " << abs(-7) << endl;
    cout << "ceil(4.2) = " << ceil(4.2) << endl;
    cout << "floor(4.7) = " << floor(4.7) << endl;
    cout << "round(4.5) = " << round(4.5) << endl;
    cout << "log(2.71828) = " << log(2.71828) << endl;
    cout << "sin(0) = " << sin(0) << endl;
    cout << "max(10, 20) = " << max(10, 20) << endl;
    cout << "min(10, 20) = " << min(10, 20) << endl;

    cout << endl << "=== String / C-string <cstring> ===" << endl;
    char s1[] = "Hello";
    char s2[] = "World";
    cout << "strlen(s1) = " << strlen(s1) << endl;
    cout << "strcmp(s1, s2) = " << strcmp(s1, s2) << endl;
    cout << "strcpy(dest, s1) = " << strcpy(s1, s2) << endl;
    cout << "strcat(s1, s2) = " << strcat(s1, s2) << endl;

    cout << endl << "=== std::string methods ===" << endl;
    string s = "C++ Programming";
    cout << "size() = " << s.size() << endl;
    cout << "length() = " << s.length() << endl;
    cout << "substr(0, 3) = " << s.substr(0, 3) << endl;
    cout << "find('g') = " << s.find('g') << endl;

    cout << endl << "=== Common I/O and limits ===" << endl;
    cout << "INT_MAX = " << INT_MAX << endl;
    cout << "INT_MIN = " << INT_MIN << endl;
    cout << "FLT_MAX = " << FLT_MAX << endl;

    return 0;
}
