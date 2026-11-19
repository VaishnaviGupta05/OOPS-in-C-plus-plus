#include <iostream>
using namespace std;

class Example {
    int a, b;

public:
    Example(int x = 0, int y = 0);
    void display();
    Example operator+(const Example& E);
};

Example::Example(int x, int y) {
    a = x;
    b = y;
}

void Example::display() {
    cout << "a = " << a << ", b = " << b << endl;
}

Example Example::operator+(const Example& E) {
    return Example(a + E.a, b + E.b);
}
int main() {
    Example E1(10, 20);
    Example E2(100, 200);
    Example E3;

    E1.display();
    E2.display();

    E3 = E1 + E2;
    E3.display();

    return 0;
}