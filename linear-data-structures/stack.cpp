#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Linear data structures - Stack (Stiva).
    A stack follows the LIFO (Last In, First Out) principle.
    The main operations are:
    - push  : add an element on top
    - pop   : remove the top element
    - top   : inspect the top element
    - empty : check whether the stack is empty

    This is a fixed-size array-based implementation.
*/

const int MAX = 100;
int st[MAX];
int top = -1;

void push(int x) {
    if (top >= MAX - 1) {
        cout << "Stack overflow!" << endl;
        return;
    }
    st[++top] = x;
}

void pop() {
    if (top < 0) {
        cout << "Stack underflow!" << endl;
        return;
    }
    top--;
}

int stackTop() {
    if (top < 0) {
        cout << "Stack is empty!" << endl;
        return -1;
    }
    return st[top];
}

bool empty() {
    return top < 0;
}

int main() {
    push(10);
    push(20);
    push(30);

    cout << "Top element: " << stackTop() << endl; // 30
    pop();
    cout << "Top element after pop: " << stackTop() << endl; // 20

    return 0;
}
