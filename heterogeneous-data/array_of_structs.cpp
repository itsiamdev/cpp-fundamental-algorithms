#include <iostream>
#include <string>
using namespace std;

/*
    PROBLEM STATEMENT:

    Arrays of structs and initialization.
    Demonstrate how to store a collection of heterogeneous records
    using an array of structs, then iterate over them.
*/

struct Product {
    string name;
    double price;
    int quantity;
};

int main() {
    const int n = 3;
    Product products[n] = {
        {"Laptop", 999.99, 5},
        {"Mouse", 25.50, 20},
        {"Keyboard", 49.99, 10}
    };

    cout << "Product inventory:" << endl;
    for (int i = 0; i < n; i++) {
        cout << products[i].name << " - $"
             << products[i].price
             << " | Qty: " << products[i].quantity << endl;
    }

    return 0;
}
