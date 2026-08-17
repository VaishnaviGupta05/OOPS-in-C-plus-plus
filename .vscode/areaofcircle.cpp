#include <iostream>
using namespace std;

class AreaOfCircle {
private:
    float radius;

public:
    void getdata(float r) {
        radius = r;
    }

    float calculateArea() {
        return 3.14159f * radius * radius;
    }
};

int main() {
    AreaOfCircle A;
    float r;

    cout << "Enter the radius of the circle: ";
    cin >> r;

    A.getdata(r);
    float area = A.calculateArea();
    cout << "The area of the circle is: " << area << endl;

    return 0;
}