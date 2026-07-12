#include <iostream>
#include <string>
using namespace std;

/*
    PROBLEM STATEMENT:

    Demonstrate common escape sequences in C++.
*/

int main() {
    cout << "Newline: Hello\nWorld" << endl;
    cout << "Tab: Name\tAge\tCity" << endl;
    cout << "Carriage return: ABC\rXY" << endl;
    cout << "Backspace: abc\b" << endl;
    cout << "Form feed: Page1\fPage2" << endl;
    cout << "Vertical tab: Col1\vCol2" << endl;
    cout << "Alert: \a" << endl;
    cout << "Backslash: C:\\Program Files" << endl;
    cout << "Single quote: It\'s C++" << endl;
    cout << "Double quote: She said \"Hi\"" << endl;
    cout << "Question mark: \?!" << endl;
    cout << "Null terminator: \0" << endl;
    cout << "Hex: \x41 = " << (char)0x41 << endl;
    cout << "Octal: \101 = " << (char)0101 << endl;

    return 0;
}
