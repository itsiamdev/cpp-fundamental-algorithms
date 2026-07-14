#include <iostream>

// ============================================================
// More about functions
// ------------------------------------------------------------
// - Function overloading: multiple functions with the SAME name
//   but DIFFERENT parameter lists.
// - Default arguments: parameters that get a value if not provided.
// - Inline functions: hint to the compiler to insert the body
//   directly (avoids the small overhead of a call).
// - Recursion: a function that solves a problem by calling itself
//   on a smaller subproblem.
// ============================================================

// Overloaded functions: same name, different parameters.
int max(int a, int b) {
    return (a > b) ? a : b;
}

double max(double a, double b) {
    return (a > b) ? a : b;
}

// Default argument: d is optional and defaults to 1.
int power(int base, int exp = 2) {
    int result = 1;
    for (int i = 0; i < exp; ++i) {
        result *= base;
    }
    return result;
}

// Inline function: ideal for tiny, frequently used helpers.
inline int triple(int x) {
    return x * 3;
}

// Recursion: factorial n! = n * (n-1)!
int factorial(int n) {
    if (n <= 1) {
        return 1;     // base case
    }
    return n * factorial(n - 1);   // recursive step
}

int main() {
    std::cout << "=== More About Functions ===" << std::endl;

    std::cout << "max(3, 7)        = " << max(3, 7) << std::endl;
    std::cout << "max(2.5, 1.8)    = " << max(2.5, 1.8) << std::endl;

    std::cout << "power(5)         = " << power(5) << " (default exp = 2)" << std::endl;
    std::cout << "power(2, 5)      = " << power(2, 5) << std::endl;

    std::cout << "triple(9)        = " << triple(9) << " (inline)" << std::endl;

    std::cout << "factorial(5)     = " << factorial(5) << " (recursion)" << std::endl;

    return 0;
}
