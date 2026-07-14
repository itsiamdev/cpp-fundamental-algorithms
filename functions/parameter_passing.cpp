#include <iostream>

// ============================================================
// Passing parameters
// ------------------------------------------------------------
// - Pass by VALUE: a COPY of the argument is given to the function.
//   Changes inside the function do NOT affect the original variable.
// - Pass by REFERENCE (using &): the function receives the original
//   variable itself. Changes inside DO affect the caller's variable.
// - Pass by POINTER (*): similar to reference, the address is passed
//   and the original can be modified via dereferencing.
// ============================================================

// Pass by value: x is a copy of a.
void by_value(int x) {
    x = x + 10;
    std::cout << "inside by_value, x = " << x << std::endl;
}

// Pass by reference: y refers to the original variable b.
void by_reference(int& y) {
    y = y + 10;
    std::cout << "inside by_reference, y = " << y << std::endl;
}

// Pass by pointer: p holds the address of c.
void by_pointer(int* p) {
    *p = *p + 10;   // dereference to change the original value
    std::cout << "inside by_pointer, *p = " << *p << std::endl;
}

// Constant reference: read-only access, no copy, no modification.
int sum_array(const int& a, const int& b) {
    return a + b;
}

int main() {
    std::cout << "=== Passing Parameters ===" << std::endl;

    int a = 5, b = 5, c = 5;

    by_value(a);
    std::cout << "after by_value, a = " << a << " (unchanged)" << std::endl;

    by_reference(b);
    std::cout << "after by_reference, b = " << b << " (changed)" << std::endl;

    by_pointer(&c);   // &c passes the address of c
    std::cout << "after by_pointer, c = " << c << " (changed)" << std::endl;

    std::cout << "sum_array(b, c) = " << sum_array(b, c) << std::endl;

    return 0;
}
