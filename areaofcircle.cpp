#include <iostream>
using namespace std;
// area of circle using classes
class Area {
public:
    float radius;
    float circleArea() {
        return 3.14 * radius * radius;
    }
};
int main() {
    Area a;
    cout << "Enter radius of circle: ";
    cin >> a.radius;
    cout << "Area of circle: " << a.circleArea() << endl;
    return 0;
}