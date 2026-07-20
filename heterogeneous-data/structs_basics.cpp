#include <iostream>
#include <string>
using namespace std;

/*
    PROBLEM STATEMENT:

    Structuri de date neomogene (Heterogeneous data structures).
    Demonstrate C++ structs that group together fields of different types
    into a single composite type.
*/

struct Point {
    int x;
    int y;
};

struct Student {
    string name;
    int id;
    double grade;
};

int main() {
    // create a Point
    Point p;
    p.x = 10;
    p.y = 20;

    // create a Student
    Student s;
    s.name = "Alice";
    s.id = 1;
    s.grade = 9.5;

    cout << "Point: (" << p.x << ", " << p.y << ")" << endl;
    cout << "Student: " << s.name << " | ID: " << s.id
         << " | Grade: " << s.grade << endl;

    return 0;
}
