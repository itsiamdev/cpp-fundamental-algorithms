#include <iostream>

// continue: skips the current iteration of a loop and proceeds to the next iteration

// continue in a for loop
void continue_in_for_loop() {
    std::cout << "Print numbers from 1 to 5, skipping 3:" << std::endl;
    for (int i = 1; i <= 5; ++i) {
        if (i == 3) {
            std::cout << "[Skipping 3] ";
            continue;  // skip the rest of the current iteration
        }
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

// continue in a while loop
void continue_in_while_loop() {
    int count = 1;

    std::cout << "Print odd numbers from 1 to 10:" << std::endl;
    while (count <= 10) {
        ++count;  // increment before the check

        if (count % 2 == 0) {
            std::cout << "[Skipping even " << count << "] ";
            continue;  // skip even numbers
        }

        std::cout << count << " ";
    }
    std::cout << std::endl;
}

// continue: print only even numbers
void continue_even_numbers() {
    std::cout << "\nPrint even numbers from 1 to 10:" << std::endl;
    for (int i = 1; i <= 10; ++i) {
        if (i % 2 != 0) {
            continue;  // skip odd numbers
        }
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

// continue in nested loops: skips to the next iteration of the innermost loop
void continue_in_nested_loops() {
    std::cout << "\nSkip inner loop when j == 2:" << std::endl;
    for (int i = 1; i <= 3; ++i) {
        for (int j = 1; j <= 3; ++j) {
            if (j == 2) {
                std::cout << "[Skip] ";
                continue;  // skip only the inner loop iteration
            }
            std::cout << "(" << i << "," << j << ") ";
        }
        std::cout << std::endl;
    }
}

int main() {
    std::cout << "=== Continue in For Loop ===" << std::endl;
    continue_in_for_loop();

    std::cout << "\n=== Continue in While Loop ===" << std::endl;
    continue_in_while_loop();

    std::cout << "\n=== Continue to Print Even Numbers ===" << std::endl;
    continue_even_numbers();

    std::cout << "\n=== Continue in Nested Loops ===" << std::endl;
    continue_in_nested_loops();

    return 0;
}
