#include <iostream>

// ============================================================
// How the call stack works
// ------------------------------------------------------------
// Each time a function is called, the program creates a STACK FRAME
// (also called activation record) on the call stack. That frame holds:
//   - the function's local variables and parameters
//   - the return address (where to continue after the call)
//
// When the function returns, its frame is popped off the stack and
// the local data disappears. The stack grows "downward" as deeper
// calls happen and shrinks as they return.
//
// This example demonstrates nested calls and recursion. Watch how
// deeper calls print first on the way IN and last on the way OUT.
// ============================================================

void function_c() {
    std::cout << "  [frame] function_c()  -> pushing frame, then returning" << std::endl;
}

void function_b() {
    std::cout << " [frame] function_b()  -> entering" << std::endl;
    function_c();     // call pushes a new frame on top
    std::cout << " [frame] function_b()  -> back from function_c" << std::endl;
}

// Recursive function: a function that calls itself.
// Each recursive call adds a new frame until the base case is reached.
void countdown(int n) {
    std::cout << "  frame countdown(" << n << ") pushed" << std::endl;
    if (n <= 0) {
        std::cout << "  base case reached, unwinding..." << std::endl;
        return;       // base case: stop adding frames
    }
    countdown(n - 1); // recursive call pushes another frame
    std::cout << "  frame countdown(" << n << ") popped" << std::endl;
}

int main() {
    std::cout << "=== How the Call Stack Works ===" << std::endl;

    std::cout << "[frame] main() -> entering" << std::endl;
    function_b();     // function_b pushes function_c on top of it
    std::cout << "[frame] main() -> back from function_b" << std::endl;

    std::cout << "\nRecursion stack demo:" << std::endl;
    countdown(3);

    std::cout << "[frame] main() -> done" << std::endl;
    return 0;
}
