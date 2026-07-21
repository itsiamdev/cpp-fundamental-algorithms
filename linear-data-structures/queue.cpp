#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Linear data structures - Queue (Coada).
    A queue follows the FIFO (First In, First Out) principle.
    The main operations are:
    - enqueue : add an element at the rear
    - dequeue : remove the front element
    - front   : inspect the front element
    - empty   : check whether the queue is empty

    This is a fixed-size array-based circular implementation
    using two indices: front and rear.
*/

const int MAX = 100;
int q[MAX];
int front = 0;
int rear = -1;
int count = 0;

void enqueue(int x) {
    if (count >= MAX) {
        cout << "Queue overflow!" << endl;
        return;
    }
    rear = (rear + 1) % MAX;
    q[rear] = x;
    count++;
}

void dequeue() {
    if (count == 0) {
        cout << "Queue underflow!" << endl;
        return;
    }
    front = (front + 1) % MAX;
    count--;
}

int queueFront() {
    if (count == 0) {
        cout << "Queue is empty!" << endl;
        return -1;
    }
    return q[front];
}

bool empty() {
    return count == 0;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    cout << "Front element: " << queueFront() << endl; // 10
    dequeue();
    cout << "Front element after dequeue: " << queueFront() << endl; // 20

    return 0;
}
