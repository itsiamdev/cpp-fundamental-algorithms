#include <iostream>

// ============================================================
// Variable declaration and scope
// ------------------------------------------------------------
// - Global variable: declared outside any function.
//   Visible everywhere and lives for the whole program.
// - Local variable: declared inside a function/block.
//   Visible only there and destroyed when the function ends.
// - Parameters are also local variables of the function.
// ============================================================

// Global variable: accessible from any function below this line.
int global_counter = 0;

void use_globals() {
    global_counter++;   // modifies the shared global variable
    std::cout << "global_counter inside function = " << global_counter << std::endl;
}

void demonstrate_local_scope() {
    // Local variable: only exists inside this function.
    int local_value = 42;
    std::cout << "local_value inside function = " << local_value << std::endl;

    // Block scope: variable `i` exists only within the for loop.
    for (int i = 0; i < 3; ++i) {
        std::cout << "loop i = " << i << std::endl;
    }
    // `i` is no longer accessible here.
}

void shadow_example(int value) {
    std::cout << "parameter value = " << value << std::endl;
    {
        // A new block scope: this local variable hides (shadows)
        // the parameter with the same name (allowed but confusing).
        int value = 100;
        std::cout << "shadowed value  = " << value << std::endl;
    }
    std::cout << "parameter value again = " << value << std::endl;
}

int main() {
    std::cout << "=== Variable Declaration and Scope ===" << std::endl;

    use_globals();
    use_globals();
    std::cout << "global_counter in main = " << global_counter << std::endl;

    demonstrate_local_scope();

    shadow_example(10);

    return 0;
}
