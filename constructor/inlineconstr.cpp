// inline constructor
#include <iostream>
using namespace std;

class Example {
    int a, b;
public:
    Example(int x, int y) {
        a = x;
        b = y;
    }

    void display() {
        cout << a << " " << b << endl;
    }
};

int main() {
    Example E1(100, 200);
    E1.display();

    Example E2(60, 120);
    E2.display();

    Example E3 = E1;
    E3.display();

    return 0;
}