#include <iostream>
using namespace std;
class Circle;
class Rectangle {
private:
    double length;
    double breadth;
public:
    Rectangle(double l = 0, double b = 0) : length(l), breadth(b) {}

    friend double getArea(const Rectangle& r);
    friend void compareAreas(const Rectangle& r, const Circle& c);
};
class Circle {
private:
    double radius;
public:
    Circle(double r = 0) : radius(r) {}

    friend double getArea(const Circle& c);
    friend void compareAreas(const Rectangle& r, const Circle& c);
};
double getArea(const Rectangle& r) {
    return r.length * r.breadth;
}

double getArea(const Circle& c) {
    return 3.14159 * c.radius * c.radius;
}
void compareAreas(const Rectangle& r, const Circle& c) {
    double rectArea = getArea(r);
    double circleArea = getArea(c);

    cout << "Rectangle area: " << rectArea << endl;
    cout << "Circle area: " << circleArea << endl;

    if (rectArea > circleArea) {
        cout << "Rectangle is larger." << endl;
    } else if (circleArea > rectArea) {
        cout << "Circle is larger." << endl;
    } else {
        cout << "Both shapes have equal area." << endl;
    }
}
int main() {
    Rectangle rect(8, 5);
    Circle circle(4);

    compareAreas(rect, circle);

    return 0;
}

/*
Why a friend function is suitable here:
- The comparison needs access to private members of both classes (length, breadth, radius).
- A non-member function cannot otherwise access private data directly.
- Declaring the function as friend allows controlled access without exposing the entire class interface.
- This keeps data encapsulation intact while still allowing a specific required operation.
*/
