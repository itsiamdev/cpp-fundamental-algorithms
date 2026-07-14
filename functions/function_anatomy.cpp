#include <iostream>

// ============================================================
// Anatomy of a C++ function
// ------------------------------------------------------------
// A function is composed of several parts:
//
//     return_type  name        ( parameter_list )   { body }
//         |         |                |                 |
//     int         add            int a, int b       { return a + b; }
//
// - return_type: the type of value the function gives back (void = nothing)
// - name: the identifier used to call the function
// - parameter_list: inputs declared inside the parentheses (can be empty)
// - body: the block of statements enclosed in { }
// ============================================================

// The smallest possible function: returns nothing, takes nothing.
// `void` means "no value is returned".
void greet() {
    std::cout << "Hello from a function!" << std::endl;
}

// A function with a return type and two parameters.
// The body uses `return` to send a value back to the caller.
int add(int a, int b) {
    int sum = a + b;   // local variable created inside the body
    return sum;        // the returned value must match the return_type
}

// The `return` statement also ends the function immediately.
int absolute_value(int x) {
    if (x < 0) {
        return -x;     // function stops here and gives back -x
    }
    return x;          // reached only when x >= 0
}

int main() {
    std::cout << "=== Anatomy of a Function ===" << std::endl;

    greet();

    int result = add(3, 4);
    std::cout << "add(3, 4) = " << result << std::endl;

    std::cout << "absolute_value(-7) = " << absolute_value(-7) << std::endl;
    std::cout << "absolute_value(5)  = " << absolute_value(5)  << std::endl;

    return 0;
}
