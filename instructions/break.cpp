#include <iostream>

// break: terminates the loop or switch statement immediately
// Program control resumes at the next statement following the loop or switch

// break in a for loop
void break_in_for_loop() {
    std::cout << "Printing numbers until we hit 4:" << std::endl;
    for (int i = 1; i <= 10; ++i) {
        if (i == 4) {
            std::cout << "Breaking at " << i << std::endl;
            break;  // exit the loop immediately
        }
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

// break in a while loop
void break_in_while_loop() {
    int count = 1;

    std::cout << "Counting until we reach 3:" << std::endl;
    while (count <= 10) {
        if (count == 3) {
            std::cout << "Breaking at " << count << std::endl;
            break;  // exit the loop immediately
        }
        std::cout << count << " ";
        ++count;
    }
    std::cout << std::endl;
}

// break in a switch statement
void break_in_switch() {
    int day = 3;

    std::cout << "Day " << day << " of the week:" << std::endl;
    switch (day) {
        case 1:
            std::cout << "Monday" << std::endl;
            break;  // prevents fall-through to case 2
        case 2:
            std::cout << "Tuesday" << std::endl;
            break;
        case 3:
            std::cout << "Wednesday" << std::endl;
            break;
        case 4:
            std::cout << "Thursday" << std::endl;
            break;
        case 5:
            std::cout << "Friday" << std::endl;
            break;
        default:
            std::cout << "Weekend" << std::endl;
    }
}

// break in nested loops: only terminates the innermost loop
void break_in_nested_loops() {
    std::cout << "Pattern with break:" << std::endl;
    for (int i = 1; i <= 3; ++i) {
        for (int j = 1; j <= 3; ++j) {
            if (j == 2) {
                break;  // breaks only the inner loop
            }
            std::cout << "(" << i << "," << j << ") ";
        }
        std::cout << std::endl;
    }
}

int main() {
    std::cout << "=== Break in For Loop ===" << std::endl;
    break_in_for_loop();

    std::cout << "\n=== Break in While Loop ===" << std::endl;
    break_in_while_loop();

    std::cout << "\n=== Break in Switch ===" << std::endl;
    break_in_switch();

    std::cout << "\n=== Break in Nested Loops ===" << std::endl;
    break_in_nested_loops();

    return 0;
}
