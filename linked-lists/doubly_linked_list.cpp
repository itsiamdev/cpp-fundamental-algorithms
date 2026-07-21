#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Lists dynamically allocated - Doubly linked list operations.
    Implement basic operations for a doubly linked list:
    - insert at the beginning
    - insert at the end
    - delete by value
    - display forward
    - display backward
*/

struct DNode {
    int data;
    DNode* prev;
    DNode* next;
};

// Insert at the beginning
void insertFront(DNode*& head, DNode*& tail, int x) {
    DNode* p = new DNode;
    p->data = x;
    p->prev = nullptr;
    p->next = head;

    if (head != nullptr) {
        head->prev = p;
    } else {
        tail = p;
    }
    head = p;
}

// Insert at the end
void insertEnd(DNode*& head, DNode*& tail, int x) {
    DNode* p = new DNode;
    p->data = x;
    p->prev = tail;
    p->next = nullptr;

    if (tail != nullptr) {
        tail->next = p;
    } else {
        head = p;
    }
    tail = p;
}

// Delete a node by value (first occurrence)
void deleteNode(DNode*& head, DNode*& tail, int x) {
    if (head == nullptr) return;

    DNode* walk = head;
    while (walk != nullptr && walk->data != x) {
        walk = walk->next;
    }

    if (walk == nullptr) return;

    if (walk == head) {
        head = head->next;
        if (head != nullptr) {
            head->prev = nullptr;
        } else {
            tail = nullptr;
        }
    } else if (walk == tail) {
        tail = tail->prev;
        tail->next = nullptr;
    } else {
        walk->prev->next = walk->next;
        walk->next->prev = walk->prev;
    }

    delete walk;
}

// Display the list forward
void displayForward(DNode* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Display the list backward
void displayBackward(DNode* tail) {
    while (tail != nullptr) {
        cout << tail->data << " ";
        tail = tail->prev;
    }
    cout << endl;
}

int main() {
    DNode* head = nullptr;
    DNode* tail = nullptr;

    insertEnd(head, tail, 10);
    insertFront(head, tail, 5);
    insertEnd(head, tail, 20);
    insertFront(head, tail, 1);

    cout << "Forward: ";
    displayForward(head); // 1 5 10 20

    cout << "Backward: ";
    displayBackward(tail); // 20 10 5 1

    deleteNode(head, tail, 5);
    cout << "After deleting 5 forward: ";
    displayForward(head); // 1 10 20

    deleteNode(head, tail, 1);
    cout << "After deleting 1 backward: ";
    displayBackward(tail); // 20 10

    deleteNode(head, tail, 20);
    cout << "After deleting 20 forward: ";
    displayForward(head); // 10

    return 0;
}
