#include <iostream>
#include <string>
using namespace std;

/*
    PROBLEM STATEMENT:

    Secvente escape (Escape sequences).
    Demonstrate common C++ escape sequences used inside strings
    and character literals to represent non-printable or special characters.
*/

int main() {
    cout << "Newline: Hello\nWorld" << endl;
    cout << "Tab: Name\tAge\tCity" << endl;
    cout << "Backslash: C:\\Program Files" << endl;
    cout << "Double quote: She said \"Hi\"" << endl;
    cout << "Single quote: It\'s C++" << endl;
    cout << "Question mark: \?!" << endl;
    cout << "Alert (bell): \a" << endl;
    cout << "Null terminator ends a C-string: \0" << endl;
    cout << "Hex escape: \\x41 = " << (char)0x41 << endl;
    cout << "Octal escape: \\101 = " << (char)0101 << endl;

    return 0;
}
