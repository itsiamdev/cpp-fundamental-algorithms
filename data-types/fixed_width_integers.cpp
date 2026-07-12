#include <iostream>
#include <cstdint>
using namespace std;

/*
    PROBLEM STATEMENT:

    Demonstrate the use of fixed-width integer types in C++.
    Print sizes and sample values for int8_t, int16_t, int32_t, int64_t, uint8_t, uint16_t, uint32_t, uint64_t.
*/

int main() {
    int8_t a = 127;
    int16_t b = 32767;
    int32_t c = 2147483647;
    int64_t d = 9223372036854775807;

    uint8_t ua = 255;
    uint16_t ub = 65535;
    uint32_t uc = 4294967295;
    uint64_t ud = 18446744073709551615ULL;

    cout << "int8_t: " << (int)a << " | size: " << sizeof(a) << " bytes" << endl;
    cout << "int16_t: " << b << " | size: " << sizeof(b) << " bytes" << endl;
    cout << "int32_t: " << c << " | size: " << sizeof(c) << " bytes" << endl;
    cout << "int64_t: " << d << " | size: " << sizeof(d) << " bytes" << endl;

    cout << "uint8_t: " << (unsigned int)ua << " | size: " << sizeof(ua) << " bytes" << endl;
    cout << "uint16_t: " << ub << " | size: " << sizeof(ub) << " bytes" << endl;
    cout << "uint32_t: " << uc << " | size: " << sizeof(uc) << " bytes" << endl;
    cout << "uint64_t: " << ud << " | size: " << sizeof(ud) << " bytes" << endl;

    return 0;
}
