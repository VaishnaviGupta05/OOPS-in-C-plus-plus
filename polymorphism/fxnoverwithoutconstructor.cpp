#include <iostream>
using namespace std;
class Example {
    int a, b;
public:
    void getdata(int x, int y);
    void display();
    Example sum(Example other);
};
void Example::getdata(int x, int y) {
    a = x;
    b = y;
}
void Example::display() {
    cout << "a = " << a << ", b = " << b << endl;
}
Example Example::sum(Example other) {
    Example result;
    result.a = a + other.a;
    result.b = b + other.b;
    return result;
}
int main() {
    Example E1, E2, E3;
    E1.getdata(10, 20);
    E1.display();
    E2.getdata(100, 200);
    E2.display();
    E3 = E1.sum(E2);
    E3.display();
}