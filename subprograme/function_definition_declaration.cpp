#include <iostream>

// ============================================================
// Defining and declaring a function
// ------------------------------------------------------------
// - Declaration (prototype): tells the compiler the function's
//   signature (name, return type, parameters) WITHOUT its body.
//   It ends with a semicolon.
// - Definition: provides the actual body of the function.
//
// A function must be DECLARED before it is USED (called).
// The simplest way is to define it above main().
// Alternatively, declare it above main() and define it below.
// ============================================================

// Declaration (prototype) of a function defined later.
// The parameter names are optional here: `int multiply(int, int);` is valid.
int multiply(int x, int y);

// Definition of a function placed BEFORE main() -> also serves as its declaration.
int square(int n) {
    return n * n;
}

int main() {
    std::cout << "=== Defining and Declaring a Function ===" << std::endl;

    std::cout << "square(6) = " << square(6) << std::endl;

    // multiply() was only declared above; its body appears below main().
    std::cout << "multiply(4, 5) = " << multiply(4, 5) << std::endl;

    return 0;
}

// Definition of multiply(), located AFTER main().
// Works because we declared its prototype earlier.
int multiply(int x, int y) {
    return x * y;
}
