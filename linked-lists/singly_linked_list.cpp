#include <iostream>
using namespace std;

/*
    PROBLEM STATEMENT:

    Lists dynamically allocated - Singly linked list operations.
    Implement basic operations for a singly linked list:
    - insert at the beginning
    - insert at the end
    - delete by value
    - search
    - display the list
*/

struct Node {
    int data;
    Node* next;
};

// Insert at the beginning
void insertFront(Node*& head, int x) {
    Node* p = new Node;
    p->data = x;
    p->next = head;
    head = p;
}

// Insert at the end
void insertEnd(Node*& head, int x) {
    Node* p = new Node;
    p->data = x;
    p->next = nullptr;

    if (head == nullptr) {
        head = p;
        return;
    }

    Node* walk = head;
    while (walk->next != nullptr) {
        walk = walk->next;
    }
    walk->next = p;
}

// Delete a node by value (first occurrence)
void deleteNode(Node*& head, int x) {
    if (head == nullptr) return;

    if (head->data == x) {
        Node* tmp = head;
        head = head->next;
        delete tmp;
        return;
    }

    Node* walk = head;
    while (walk->next != nullptr && walk->next->data != x) {
        walk = walk->next;
    }

    if (walk->next != nullptr) {
        Node* tmp = walk->next;
        walk->next = walk->next->next;
        delete tmp;
    }
}

// Search for a value
bool search(Node* head, int x) {
    while (head != nullptr) {
        if (head->data == x) return true;
        head = head->next;
    }
    return false;
}

// Display the list
void display(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* list = nullptr;

    insertEnd(list, 10);
    insertFront(list, 5);
    insertEnd(list, 20);
    insertFront(list, 1);

    cout << "List: ";
    display(list); // 1 5 10 20

    cout << "Search 10: " << (search(list, 10) ? "found" : "not found") << endl;
    cout << "Search 7: " << (search(list, 7) ? "found" : "not found") << endl;

    deleteNode(list, 5);
    cout << "After deleting 5: ";
    display(list); // 1 10 20

    deleteNode(list, 1);
    cout << "After deleting 1: ";
    display(list); // 10 20

    return 0;
}
