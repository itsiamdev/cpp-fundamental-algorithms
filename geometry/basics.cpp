#include <iostream>
#include <cmath>
using namespace std;

/*
    PROBLEM STATEMENT:

    Geometry basics.
    Compute common geometric quantities:
    - Euclidean distance between two points
    - area and perimeter of a rectangle
    - area and perimeter of a circle
    - area of a triangle (Heron's formula)
*/

struct Point {
    double x;
    double y;
};

double distance(Point a, Point b) {
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

double rectangleArea(double width, double height) {
    return width * height;
}

double rectanglePerimeter(double width, double height) {
    return 2 * (width + height);
}

double circleArea(double radius) {
    return M_PI * radius * radius;
}

double circlePerimeter(double radius) {
    return 2 * M_PI * radius;
}

double triangleArea(double a, double b, double c) {
    double s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    Point a = {0, 0};
    Point b = {3, 4};
    cout << "Distance: " << distance(a, b) << endl;

    cout << "Rectangle area (3x4): " << rectangleArea(3, 4) << endl;
    cout << "Rectangle perimeter (3x4): " << rectanglePerimeter(3, 4) << endl;
    cout << "Circle area (r=5): " << circleArea(5) << endl;
    cout << "Circle perimeter (r=5): " << circlePerimeter(5) << endl;
    cout << "Triangle area (3,4,5): " << triangleArea(3, 4, 5) << endl;

    return 0;
}
